#pragma once
#include <array>
#include <cstdint>

class CPU {
public:
    std::array<std::uint8_t, 8> registers{};
    std::array<std::uint8_t, 256> ram{};
    std::uint8_t pc = 0;
    std::uint8_t sp = 0xFF;
    std::uint8_t flags = 0;
    bool is_halted = false;

    // Flag bitmasks
    static constexpr std::uint8_t FLAG_Z = 0b0000'0001; // Zero Flag
    static constexpr std::uint8_t FLAG_C = 0b0000'0010; // Carry Flag
    static constexpr std::uint8_t FLAG_N = 0b0000'0100; // Negative Flag
    static constexpr std::uint8_t FLAG_Y = 0b0000'1000; // Custom Flag (?)
    
    CPU() {
        registers.fill(0);
        ram.fill(0);
    }
};