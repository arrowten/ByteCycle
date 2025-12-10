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