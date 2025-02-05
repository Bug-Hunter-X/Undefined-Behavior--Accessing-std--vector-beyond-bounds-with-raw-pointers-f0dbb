# Undefined Behavior: Accessing std::vector Beyond Bounds with Raw Pointers

This example demonstrates a common error in C++ when using raw pointers with `std::vector`. Accessing elements outside the valid range of a vector leads to undefined behavior, potentially causing crashes, unexpected results, or seemingly random behavior.

The code in `bug.cpp` shows the incorrect way of handling a vector with raw pointers and the code in `bugSolution.cpp` demonstrates the proper way to ensure you are within the range of the vector.