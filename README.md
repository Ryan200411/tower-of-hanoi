# Tower of Hanoi

A C program that solves the Tower of Hanoi problem using recursion. Given a number of disks and three pegs, it prints the step-by-step sequence of moves required to transfer the stack from the starting peg to the destination peg.

## Features
- Recursive implementation of the Tower of Hanoi algorithm.
- Command-line interface for specifying the number of disks.
- Clean and efficient C code.

## Getting Started

### Prerequisites
- A C compiler (e.g., `gcc`)
- `make` (optional, for building with the provided Makefile)

### Building the Program
You can compile the program using the provided `Makefile`:
```bash
make
```
Alternatively, you can compile it directly with `gcc`:
```bash
gcc main.c -o hanoi
```

### Usage
Run the executable followed by the number of disks you want to solve for:
```bash
./hanoi <number_of_disks>
```

Example:
```bash
./hanoi 3
```

## Cleaning Up
To remove the compiled executable:
```bash
make clean
```

## Complexity
- **Time Complexity**: O(2^n), where n is the number of disks.
- **Space Complexity**: O(n), due to the recursion stack.
