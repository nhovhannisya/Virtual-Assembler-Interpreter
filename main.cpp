#include <iostream>
#include <cstring>
#include <VdbCli/VdbCliCore.h>
#include <VM/Logging/Logger.h>
#include <VM/Logging/ConsoleLogger.h>
#include <VM/Logging/Logging.h>
#include <VdbCli/VdbCli.h>
#include "VM/VirtualMachine.h"

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

    VdbCli cli;
    cli.run("inputCompiler.exe");

    return 0;
}