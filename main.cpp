#include <iostream>
#include <Cpu/Functors/SubFunctor.h>
#include "Headers/VirtualMachine.h"

int main() {

//    std::vector<uint8_t> ram;
//    ram.push_back(0);
//    ram.push_back(0);
//    ram.push_back(02342);
//    ram.push_back(102);
//    ram.push_back(1);
//    ram.push_back(123);
//    ram.push_back(133);
//    ram.push_back(0);
//    ram.push_back(14);
//    ram.push_back(0);
//    ram.push_back(0);
//    ram.push_back(1);
//
//    std::cout<< (int)ram.at(5) <<std::endl;
//
//    *reinterpret_cast<uint32_t *>(ram.data() + 5) = 1;
//
//    std::cout<< (int)ram.at(5) <<std::endl;
//
//    //TEST
//
//    cpu::CpuState cpuState;
//    cpu::SubFunctor functor(&cpuState);
//
//    functor(1,0,3,0,0,1);

    VirtualMachine *vm = new VirtualMachine();
    vm -> execute("C:\\Users\\mmamyan\\Documents\\GitHub\\Virtual-Assembler-Interpreter\\cmake-build-debug\\input.exe");
    return 0;
}