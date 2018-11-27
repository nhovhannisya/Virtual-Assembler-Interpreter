//
// Created by Narek Hovhannisyan and/or Milena Mamyan on 10/14/18.
//

#ifndef VIRTUAL_MACHINE_SUBFUNCTOR_H
#define VIRTUAL_MACHINE_SUBFUNCTOR_H

#include "Cpu/Functors/InstructionFunctor.h"
#include "Cpu/CPUConstants.h"
#include "Cpu/CPU.h"

namespace cpu {
    class SubFunctor : public InstructionFunctor {
    private:
        cpu::CpuState *cpuState;
    public:
        SubFunctor(cpu::CpuState *state);

        virtual void operator()(uint8_t jumpExtension, uint8_t dataSize, uint8_t registersOrder,
                                uint8_t register1, uint8_t register2, uint32_t literal);

        void sub(uint8_t dataSize, uint8_t register1, uint8_t register2);

        template<typename T>
        void executeSub(uint8_t register1, uint8_t register2);
    };
}

template<typename T>
void cpu::SubFunctor::executeSub(uint8_t register1, uint8_t register2) {
    uint16_t flags;
    T val = cpuState->getRegister<T>(register1) - cpuState->getRegister<T>(register2);
    __asm {
        pushf
        pop eax
        mov flags, eax
    }
    cpuState->writeToRegisters(register1, val);
}

#endif //VIRTUAL_MACHINE_SUBFUNCTOR_H
