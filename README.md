# Calculator with History

A simple C++ calculator with the ability to save the history of operations to the 'info.txt' file.

## Description

This calculator is written in C++ and provides basic arithmetic operations: addition, subtraction, multiplication and division. The result of each operation is output to the console and also written to the 'info.txt' file in history format.

## Requirements

To compile and execute the programme, you need a C++ compiler and a runtime environment that supports the C++ standard.

## Run

1. Compile the programme using the C++ compiler. For example:

   ```bash
   g++ calculator.cpp -o calculator
   ```

2. Run the compiled programme:

   ```bash
   ./calculator
   ```

3. Enter the first number, select the arithmetic action (+, -, /, *) and enter the second number.

4. The result of the operation will be output to the console and also added to the 'info.txt' file.

## Example usage

```bash
Simple C++ calculator with history saved in 'info.txt'
Enter the first number: 10
Select the arithmetic action (+, -, /, *): +
Enter second number: 5
Addition result: 15
```

File 'info.txt':

```
Solution "+" >> 10+5
```

## Important

In case of an error when opening the 'info.txt' file, the programme will display the message "Failed to open the file!" and terminate with error code 1.

## Licence

This project is distributed under the [MIT](LICENSE) licence. See the LICENSE file for more information.
