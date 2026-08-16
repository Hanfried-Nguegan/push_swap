*This project has been created as part of the 42 curriculum by fnguegan.*

# Push Swap

## Description

Push Swap is a sorting project whose goal is to sort a stack of integers using a limited set of operations on two stacks, while minimizing the number of moves. The challenge is not only to sort correctly, but to do it efficiently enough to satisfy the constraints of the 42 curriculum.

The project is implemented in C and uses a custom doubly linked list as the underlying data structure for the stacks. The program receives a list of integers as input, organizes them into stack A, and then moves elements between stack A and stack B using only operations such as `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb`, and their combined variants.

The main objective is to reach a final state where stack A contains the numbers in ascending order and stack B is empty.

## Project Goals

- Sort integers with the smallest possible number of stack operations
- Use only a restricted instruction set
- Implement efficient and readable C code
- Respect memory and performance constraints
- Provide a working algorithm selection depending on input size and disorder level

## Instructions

### Requirements

- A Unix-like environment
- `make`
- A C compiler such as `cc`

### Compilation

From the project root:

```bash
make
```

This compiles the project and generates the executable named `push_swap`.

### Execution

```bash
./push_swap 3 2 1 5 4
```

You can also force a specific algorithm mode:

```bash
./push_swap --simple 3 2 1
./push_swap --medium 8 7 6 5 4 3 2 1
./push_swap --complex 10 9 8 7 6 5 4 3 2 1
```

If no mode is specified, the program automatically chooses an approach based on the level of disorder and the stack size.

### Error handling

The program prints:

```bash
Error
```

when the input is invalid, for example if a number is malformed or duplicates are present.

## Algorithm Selection and Justification

This project includes several strategies to handle different input sizes and levels of disorder. The goal is to choose the most efficient method according to the situation rather than using one algorithm for everything.

### 1. Simple / small-stack strategy

For very small stacks, especially sizes of 2 or 3 elements, the program uses a direct and highly optimized manual sorting logic. This is the most efficient approach because these cases are too small to benefit from more complex stack manipulations.

The logic checks the possible arrangements of 2 or 3 elements and applies the minimal necessary swap or rotation operations. This approach reduces overhead and keeps the total instruction count extremely low for trivial cases.

### 2. Medium strategy

For medium-sized inputs, this project uses an intermediate approach based on a radix-sort-style stack partitioning logic. The idea is to reduce the sorting problem into smaller, more manageable bits by pushing values to stack B according to their bit patterns and then restoring them to stack A in the correct order.

This approach is attractive because:

- it avoids repeated full-array comparisons,
- it works well with integer ranking and bitwise operations,
- it is easier to implement efficiently on a fixed-size integer domain,
- it provides a good balance between speed and code complexity.

In this project, `--medium` is routed through the same radix-oriented logic used for efficient stack reorganization, while preserving the small-stack fallback for trivial cases.

### 3. Complex / full radix strategy

For larger and more disordered inputs, the project uses a more robust radix-based sorting method. Radix sort is well suited here because it does not require expensive comparisons between every element in the stack. Instead, it organizes numbers by their binary representation bit by bit.

This is especially useful for a project like Push Swap because:

- the numbers are already known to be integers,
- the sorting constraint is based on a limited instruction set,
- a bitwise approach can drastically reduce the number of move operations for large inputs.

The principal tradeoff is that the algorithm is more specialized than a general comparison-based sort, but it is highly efficient for this exact problem.

### Why this mix of methods?

The project is designed to be practical and performant:

- tiny inputs are handled by direct custom logic,
- medium inputs use a balanced strategy,
- large or highly disordered stacks use radix-based organization.

This is a common strategy in algorithmic optimization: use the cheapest, simplest method for the smallest inputs, and use more structured methods only when they provide measurable benefit.

## Project Structure

- `main.c` — CLI parsing and orchestration
- `push_swap.h` — shared structures and function prototypes
- `dl_list_utils.c` — doubly linked list operations
- `push_swap_utils_1.c` to `push_swap_utils_4.c` — utility functions, ranking, sorting helpers
- `sorting_manual.c` — simple and manual sorting logic
- `sorting_medium_algo.c` — medium-mode sorting implementation
- `sorting_complex_algo.c` — complex/radix-based sorting logic
- `Makefile` — build instructions

## Resources

### Reference material

- 42 Project Subject: Push Swap
- Wikipedia: Radix Sort
- GeeksforGeeks: Radix Sort
- Sorting algorithm references and bitwise sorting explanations
- Stack-based sorting and algorithmic complexity notes

### AI-assisted workflow

AI was used for the implementation of this README.md file

## Usage Example

```bash
make
./push_swap --medium 7 3 1 8 2 6 4 5
```

This prints the sequence of stack operations needed to sort the input. The exact output depends on the chosen algorithm and the input order.

## Conclusion

Push Swap is a project that combines data structure manipulation, algorithmic thinking, and optimization. The challenge is to transform a random list into a sorted stack using very constrained operations, while minimizing the number of moves and writing clean, maintainable C code.

This implementation aims to remain readable and efficient while selecting the best strategy for each input size, balancing simplicity, correctness, and performance.
