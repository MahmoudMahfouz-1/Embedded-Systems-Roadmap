# 2nd Offline Meeting
> This is the summary and the content that was explained in the offline session
## C Basics - Eng Ahmed Adel Wafdy
### Table of Contents

- [What's Embedded Systems?](#whats-embedded-systems)
- [Why C?](#why-c)
- [Variable Names](#variable-names)
- [Comments](#comments)
- [Data Types and Floating Point Types](#data-types--floating-point-types)
- [Integer and Float Conversion](#integer-and-float-conversion)
- [Type Conversion: Implicit and Explicit (Type Casting)](#type-conversion--implicit-explicit-type-casting)
- [C Input/Output](#c-oi)
- [Mathematical and Logical Operations](#mathematical--logical-operation)
- [Difference between Embedded Systems and Computers](#difference-between-embedded-systems-and-computers)
- [Advantages of C](#advantages-of-c)
- [Data Types](#data-types)
- [How to Use bool in C](#how-to-use-bool-in-c)
- [Compiler Conversion](#compiler-conversion)
- [Implicit and Explicit Conversion](#implicit--explicit-conversion)
- [Input/Output](#inputoutput)
- [Operations](#operations)
- [Post Increment vs Pre Increment](#post-increment-vs-pre-increment)
- [Right to Left or Left to Right](#right-to-left-or-left-to-right)

## What's Embedded Systems?

Embedded Systems are computing systems designed for specific tasks, typically with limited resources. They are integrated into various devices such as automobiles, medical equipment, and industrial machines.

## Why C?

C is a widely used programming language in the field of Embedded Systems due to its efficiency, portability, and direct access to hardware resources. It allows developers to write low-level code, control memory usage, and optimize performance.

## Variable Names

In C, variable names must follow certain rules:
- They should be a sequence of letters and digits.
- They must begin with a letter.
- They should not be a keyword (reserved word) in the language.
- Special characters like semicolons, periods, spaces, slashes, or commas are not permitted.

## Comments

Comments in C are used to provide explanations or document the code. There are two types of comments:

1. Single Line Comment:
   ```c
   // This is a single line comment
   ```

2. Multi-Line Comment:
   ```c
   /* 
      This is a
      multi-line comment
   */
   ```

## Data Types and Floating Point Types

C supports various data types:
- Integer types: `int`, `short`, `long`, `char`, etc.
- Floating-point types: `float`, `double`, `long double`, etc.

Each data type has a specific size and range, which you need to consider while working with variables.

can you predict x ?
   ```c
   short x = 32768 ;
   printf("%d" , x);
   ```
can you predict x ?
   ```c
   char x = 142 ;
   printf("%d" , x);
   ```
Can you tell me What is the size of int?
   The size of the int data type in C can vary depending on the platform and compiler being used. In most cases, the int data type has a size of 4 bytes     or 32 bits. However, it's important to note that the size of int can be different on different systems.
## Integer and Float Conversion

C provides automatic conversion between integers and floats when performing arithmetic operations. For example:
- `int / int` results in an `int`.
- `int / float` results in a `float`.
- `float / float` results in a `float`.
- `float / int` results in a `float`.

can you predict the result?
   ```c
   float x,y,z;
   int result;
   result = x*y*z /100 + 32/4 -3*1.1; 
   printf("%d",result);
   ```
so x equal to ?
   ```c
   float x = 2/3 +5;       VS      float x = 2/3.0 + 5;
   ```
Explicit conversion (type casting) can also be used to convert variables from one type to another.

## Type Conversion: Implicit, Explicit (Type Casting)

Type conversion in C can be either implicit or explicit. Implicit conversion occurs automatically, while explicit conversion (type casting) requires the programmer to specify the conversion explicitly.

The type conversion hierarchy in C is as follows: `char` -> `short` -> `int` -> `unsigned int` -> `long int` -> `unsigned long int` -> `float` -> `double` -> `long double`.
X,z?
   ```c
   int x = 10;
   char y = 'a'; //a in ASCII eual to 97
        
   x = x + y ;
   float z = x + 1.0 ;
   ```
sum ?
   ```c
   double x= 1.2 ;
   int sum = (int) x + 1;
   ```

## C Input/Output

C provides input and output (I/O) functions for reading and writing data. The most commonly used functions are `printf()` for output and `scanf()` for input. It's important to understand the format specifiers used with `printf()` to correctly print different data types.

basic operation >
   ```c
   int Tempreture;
   printf("Enter Tempreture");
   scanf("%d",&Tempreture);
   printf("Tempreture is : %d",Tempreture);
   ```
printf return ?
   ```c
   int x; 
   x = printf("hello IEEE\n");
   printf("%d",x);
   ```

## Mathematical & Logical Operations

C supports various mathematical and logical operations. Common operations include parentheses for grouping, division, multiplication, modulus, addition, and subtraction. It's important to consider the order of operations while performing complex calculations.

## Difference between Embedded Systems and Computers

Embedded Systems have specific constraints and requirements compared to general-purpose computers. They are designed for dedicated tasks, operate with limited resources, and often require real-time responsiveness.

## Advantages of C

C offers several advantages for embedded systems development:
- Optimization: C allows developers to write efficient and optimized code for resource-constrained systems.
- Portability: C programs can be written to be portable across different hardware platforms.
- Access to Hardware: C provides direct access to hardware resources, allowing low-level control and interaction.
- Integration with Assembly: C code can be easily integrated with assembly code, enabling fine-grained control and performance optimization.

## Data Types

Understanding data types is crucial in C programming. It includes knowing the size and range of each data type to ensure appropriate memory allocation and representation of values.

## How to Use bool in C?

In C99 and later versions, the `stdbool.h` library provides the `bool` type along with `true` and `false` constants. To use `bool` in C, include the `stdbool.h` header file in your program.

## Compiler Conversion

C compilers automatically perform type conversions during expressions and assignments. It's essential to understand how the compiler handles conversions between different data types to avoid unexpected results.

## Input/Output

C provides input/output functions (`printf()`, `scanf()`) for reading input from the user and displaying output. Understanding how to format data for input and output is crucial for effective communication with the user.

## Operations

C supports a wide range of operations, including mathematical and logical operations. Understanding the order of operations (`()`, `*`, `/`, `%`, `-`, `+`) ensures correct execution and desired results.

            ==> Correctly Execute
                () , / * % , - +
> i?
   ```c
   i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8
   ```
>
   ```c
   x = ( x + y )* z                VS              x = x + y * z ;
   ```


## Post Increment vs Pre Increment

In C, the post-increment (`x++`) and pre-increment (`++x`) operators are used to increment the value of a variable. The difference lies in the order of operations and the value returned

>
   ```c
   int x =1;
   x++;
   ++x;
   printf("%d ",++x);
   ```
x,y ?
>
   ```c
   int x = 1;
   int y = 0;
   y = x++ + x++; 
   printf("%d , %d",x,y); .
   ```

## Right to Left or Left to Right
x?
   ```c
   int x = 10;
   printf("%d , %d",++x,x++);
   ```
C follows a specific order of evaluation for expressions. Understanding whether an expression is evaluated from right to left or left to right is crucial for determining the output.


Feel free to explore the code and enhance your understanding of Embedded Systems and C programming. Happy coding!

## Conditions and Loops - Eng Yomna Walid
[**Conditions & Loops**](../Resources/2nd%20Offline%20Meeting/Yomna.pdf)

## Small Projects 

[**Calculator**](../Resources/2nd%20Offline%20Meeting/Calculator.c)

[**Temperature**](../Resources/2nd%20Offline%20Meeting/Temperature.c)

[**GradeBook**](../Resources/2nd%20Offline%20Meeting/Gradebook.c)

