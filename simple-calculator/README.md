**##Interactive Calculator (C)
**
**Description**

A simple terminal-based calculator written in C. The program uses an interactive menu to allow users to perform basic arithmetic operations.

**Compilation**

Compile using GCC with the following flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

**Running the Program**

Execute the compiled program from the terminal:

./calculator.c

Follow the on-screen menu to select an operation and enter the required numbers.

**Supported Operations**

Addition (+)

Subtraction (-)

Multiplication (*)

Division (/)

Exit

**Numeric Behaviour**

The calculator uses integer arithmetic. Decimal values are supported to 1 decimal place, and division between integers truncates any remainder beyond this.

Division by zero is handled to prevent invalid calculations.

**Known Limitations**

Menu selections must be valid integers within the displayed range.

Non-numeric input is not robustly handled.

Only integer operands are supported.

No calculation history is stored.
