#pragma once
#include <cpu.hxx>

class Computer {
public:
    CPU cpu;

    void load_program(const std::vector<std::uint8_t>& program, std::uint8_t start_address);

    Computer(): cpu() {}
};