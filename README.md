# Perfect Numbers Finder

This program is designed to find perfect numbers up to a given limit. A perfect number is a positive integer that is equal to the sum of its proper divisors. For example, 6 is a perfect number because 6 = 1 + 2 + 3.

## Developer Insights

This program is written in C++ and is designed to run in the terminal. It uses standard input and output to interact with the user. The main logic of the program is contained within the `main.cpp` file. Here's a brief overview of the key functions:

- `explainThisProgram()`: This function outputs a brief explanation of what a perfect number is and what the program does.

- `isPerfectNumber(unsigned long long number)`: This function checks if a given number is a perfect number.

- `findPerfectNumbers(unsigned long long limit)`: This function finds all the perfect numbers up to a given limit.

- `clearScreen()`: This function clears the terminal screen.

The program starts by explaining what a perfect number is. It then prompts the user to enter a limit. If the user enters -1, the program will run indefinitely, looking for perfect numbers up to the maximum value of an unsigned long long.

The program then clears the screen, reprints the explanation, and starts looking for perfect numbers. It outputs any perfect numbers it finds.

## Building and Running the Program

To build and run the program, you can use a C++ compiler such as g++. Here's how you can do it on Linux:

```sh
g++ main.cpp -o perfect_numbers
./perfect_numbers
```

To build and run the program on Windows, you can use MinGW or another C++ compiler.

You may use Code::Blocks, Visual Studio, or any other IDE to build and run the program as well.

## License

This program is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

This program was created by SR Tamim. [Learn more about perfect numbers](https://en.wikipedia.org/wiki/Perfect_number).