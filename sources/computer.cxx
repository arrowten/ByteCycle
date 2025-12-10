#include <computer.hxx>

/// Loads a program into RAM at the given address and sets the CPU's PC to start executing it.
void Computer::load_program(const std::vector<std::uint8_t>& program, std::uint8_t start_address) {
    if(start_address + program.size() > cpu.ram.size()) {
        std::println("Program too large!!");

        return;
    }

    for(std::size_t i = 0; i < program.size(); i++) {
        std::uint8_t address = static_cast<std::uint8_t>(start_address + i);
        cpu.ram[address] = program[i];
    }

    cpu.pc = start_address;

    std::println("Program loaded. PC set to 0x{:02X}\n", cpu.pc);
}