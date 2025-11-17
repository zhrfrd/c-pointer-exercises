# C pointer exercises

![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)

A complete collection of practical exercises designed to understand pointers in C from the absolute basics to dynamic memory, pointers to pointers, and data structures.
This repository is structured in increasing difficulty, with each folder containing small, focused programs that can be compiled and run individually.

## List of exercises

### Beginner – Basic pointer usage
- [Declare a pointer and assign it the address of a variable](1-beginner/1-basic-pointer-declaration.c).
- [Print the value of a variable using a pointer](1-beginner/2-pointer-value-print.c).
- [Change the value of a variable using a pointer](1-beginner/3-pointer-value-change.c).
- [Print the address of a variable](1-beginner/4_pointer_address_print.c).
- [Use a pointer to print the size of a variable (with sizeof)](1-beginner/5_pointer_sizeof.c).
- [Swap two numbers using pointers](1-beginner/6_swap_two_numbers.c).
- Find the sum of two numbers using pointers.

### Intermediate – Pointer arithmetic
- Use pointer arithmetic to traverse an array.
- Find the maximum/minimum element of an array using pointers.
- Reverse an array using pointers.
- Sum all elements of an array using pointers.
- Copy an array using pointers.
- Compare two arrays using pointers.
- Count the number of occurrences of a number in an array using pointers.

### Advanced – Pointers and functions
- Pass a pointer to a function and modify a variable.
- Implement a function to swap two numbers using pointers.
- Pass an array to a function using a pointer and print its elements.
- Find the length of a string using a pointer.
- Copy a string using pointers.
- Concatenate two strings using pointers.
- Compare two strings using pointers.
- Reverse a string using pointers.

### Expert – Pointers to pointers and dynamic memory
- Use a pointer to a pointer.
- Allocate memory for an array dynamically using malloc.
- Resize a dynamically allocated array using realloc.
- Free allocated memory using free.
- Implement a dynamic 2D array using pointers to pointers.
- Create a linked list using pointers.
- Insert a node at the beginning, end, or middle of a linked list.
- Delete a node from a linked list using pointers.
- Implement a stack using pointers and dynamic memory.
- Implement a queue using pointers and dynamic memory.

## Template for each file
```
/*
 * Exercise [NUMBER]: [EXERCISE NAME]
 * Difficulty: [BEGINNER/INTERMEDIATE/ADVANCED/EXPERT]
 * Description: [Short description of the exercise]
 * Author: [Your Name]
 * Date: [Date]
 */

#include <stdio.h>

int main(void) {
    // TODO: Implement solution here

    return 0;
}
```

## How to compile each file
Each exercise is a standalone C program.
You can compile them using GCC from the terminal:

### Compile a file
```
gcc -o output_file file_name.c
```

### Run the compiled program
```
./output_file
```

## Repository structure
```
c-pointer-exercises/
├── 1-beginner/
│   ├── 01_basic_pointer_declaration.c
│   ├── 02_pointer_value_print.c
│   ├── 03_pointer_value_change.c
│   ├── 04_pointer_address_print.c
│   ├── 05_pointer_sizeof.c
│   ├── 06_swap_two_numbers.c
│   └── 07_sum_two_numbers.c
├── 2-intermediate/
│   ├── 08_array_traversal_pointer.c
│   ├── 09_max_min_array_pointer.c
│   ├── 10_reverse_array_pointer.c
│   ├── 11_sum_array_pointer.c
│   ├── 12_copy_array_pointer.c
│   ├── 13_compare_arrays_pointer.c
│   └── 14_count_occurrences_pointer.c
├── 3-advanced/
│   ├── 15_function_modify_variable.c
│   ├── 16_swap_numbers_function_pointer.c
│   ├── 17_pass_array_function_pointer.c
│   ├── 18_string_length_pointer.c
│   ├── 19_string_copy_pointer.c
│   ├── 20_string_concat_pointer.c
│   ├── 21_string_compare_pointer.c
│   └── 22_string_reverse_pointer.c
├── 4-expert/
│   ├── 23_pointer_to_pointer.c
│   ├── 24_dynamic_array_malloc.c
│   ├── 25_dynamic_array_realloc.c
│   ├── 26_free_memory.c
│   ├── 27_2d_dynamic_array.c
│   ├── 28_linked_list.c
│   ├── 29_linked_list_insert.c
│   ├── 30_linked_list_delete.c
│   ├── 31_stack_pointer_dynamic.c
│   └── 32_queue_pointer_dynamic.c
├── README.md
└── LICENSE
```