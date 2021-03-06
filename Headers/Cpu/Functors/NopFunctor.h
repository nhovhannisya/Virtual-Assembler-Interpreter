//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef VIRTUAL_MACHINE_NOP_H
#define VIRTUAL_MACHINE_NOP_H


#include <Cpu/CpuState.h>
#include "InstructionFunctor.h"

namespace cpu {
    class NopFunctor : public InstructionFunctor {
    public:
        NopFunctor(cpu::CpuState*state);

        virtual void operator()(Instruction & instruction);
    };
}


#endif //VIRTUAL_MACHINE_NOP_H
