#pragma once
#include <vector>
#include <array>
#include <memory>
#include <cstdint>
#include <print>

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

    void get_flag(std::uint8_t bit);
    void set_flag(std::uint8_t bit);
    void clear_flag(std::uint8_t bit);

    void update_zn_flags(std::uint8_t result);
    
    CPU() {
        registers.fill(0);
        ram.fill(0);
    }
};