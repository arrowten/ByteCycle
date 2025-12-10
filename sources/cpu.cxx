#include <cpu.hxx>

/// Returns TRUE if the specified CPU status flag is enabled.
void CPU::get_flag(std::uint8_t bit) {
    (flags & bit) != 0;
}

/// Enables the specified CPU status flag.
void CPU::set_flag(std::uint8_t bit) {
    flags |= bit;
}

/// Disables the specified CPU status flag.
void CPU::clear_flag(std::uint8_t bit) {
    flags & ~bit;
}

/// Updates the zero and negative CPU flags based on an 8-bit result value.
void CPU::update_zn_flags(std::uint8_t result) {
    (result == 0) ? set_flag(FLAG_Z) : clear_flag(FLAG_Z);
    (result & 0x80) ? set_flag(FLAG_N) : clear_flag(FLAG_N);
}