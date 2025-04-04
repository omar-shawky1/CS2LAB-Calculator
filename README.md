# CS2 Calculator Project

A simple calculator library in C++ that includes several mathematical operations. 
## Features

- Basic operations: addition, subtraction, multiplication, division
- Advanced operations: factorial, GCD (Greatest Common Divisor), LCM (Least Common Multiple)
- Random number generation within a specified range

## How to Build

### Using CMake

```bash
# Create and navigate to build directory
mkdir -p build
cd build

# Generate build files
cmake ..

# Build the project
cmake --build .
```


## How to Run

After building the project, run the test executable:

```bash
mkdir build && cd build
cmake .. -G "MinGW Makefiles"
cmake --build .
./CalculatorProject.exe
```

## Project Structure

- `calculator.h` - Header file with function declarations
- `calculator.cpp` - Implementation of calculator functions
- `test.cpp` - Test program demonstrating calculator functionality
- `CMakeLists.txt` - CMake build configuration
