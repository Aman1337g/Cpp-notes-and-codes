# NOTES

## 01 - Introduction to C++

- C++ -> 1979 -> Bjarne Stroustrup -> Extension of C
- C++ : fast programs , more control over system resources + memory management
- High performance
- Major updates
    - 2011 -> C++11
    - 2014 -> C++14
    - 2017 -> C++17

## 02 - Variables & Comments in C++

- A variable is a container to hold data.<br> 
Like for storing something we need containers . Now for different types of things we need different container likewise in C++ to store different types of data we have different datatypes in C++. 
> C++ provides a layer of abstraction (from low level to high level) where you can represent your data as int, float, double etc.

- Variable can be of various types. Primarily we have these variable types in C++ :
1. Int - eg. 1,3,2,56,0,...etc.
2. Float - eg. 1.34, 3.54,...etc.
3. Char - eg. 'c', 'd', 'a', 'B' ... etc.
4. Double - it is same as float with more precision. eg. 1.2435 , ... etc.
5. Boolean - True or False.
- int sum = 36; means sum is an integer variable which holds value 36 in memory.

### Syntax for declaring variables in C++

- Data_type Variable_name = Value;
eg. - int a = 4; , char letter = 'a'; , ... etc.
- Based on Scope, variable can be classified into two types:
1. Local Variables
2. Global Variables

### Comments
Used to increase the readability of a program.<br>
For example -
```cpp
// Single Line Comment
```
```cpp
/* 
    Multi-line Comment
*/
```

## 03 - Variable Scope and Data Types in C++

- Scope of a variable is the region in code where the existence of variable is valid.
- Based on scope we have local and global variables in C++
- **Local Variables**: Local variables are declared inside the braces of any function and can be accessed only from there.
- **Global Variables**: Global variables are declared outside any function and can be accessed from anywhere.

### C++ Data Types

- Data types define the type of data a **variable** can hold, for example an integer variable can hold integer data, a character type variable can hold character data etc.
- Data types in C++ are categorised in three groups : 
    - Built-in - int, float, char, double, bool.
    - User-defined - struct, union, enum .
    - Derived - array, function, pointer.

### Rules to declare variables in C++

- Variable names in C++ can range from 1 to 255 characters.
- All variable names must begin with a letter of the alphabet or an underscore(_).
- After the first initial letter, variable names can also contain letters and numbers.
- Variable names are case sensitive. eg. - means variable 'aman' and 'Aman' are two different things in C++.
- No spaces or special characters are allowed.
- You cannot use a C++ keyword (a reserved word) as a variable name.

## 04 - Basic input/output in C++

- C++ comes with libraries which helps us in performing input/output. In C++ sequence of bytes corresponding to input and output are commonly known as **streams**.
- **Input Stream**: Direction of flow of bytes takes place from input device (eg.- Keyboard) to the main memory.
- **Output Stream**: Direction of flow of bytes takes place from main memory to the output device (eg.- Display).

### Data Type size and range in C++ (For G++ 64 BIT)

- For n = size in bits (1 byte = 8 bits)
- Range = -2^(n-1) to 2^(n-1)-1 (**for signed**) <br>      
- Range = 0 to 2*(2^(n-1)-1) (**for unsigned**)

| Data Type | Size (in Bytes) | Range 
|---|---|---|
| short int | 2 | -32,768 to 32,767
| unsigned short int | 2 | 0 to 65,535
| unsigned int | 2 | 0 to 4,294,967,295
| int | 4 | -2,147,483,648 to 2,147,483,647
| long int | 4 | -2,147,483,648 to 2,147,483,647
| unsigned long int | 4 | 0 to 4,294,967,295
| long long int | 8 | -2^(63) to 2^(63)-1
| unsigned long long int | 8 | 0 to 2*(2^(63)-1)
| signed char | 1 | -128 to 127
| unsigned char | 1 | 0 to 255
| unsigned char | 1 | 0 to 255
| float | 4 | -2^31 to (2^31)-1 
| double | 8 | -2^63 to (2^63)-1
| long double | 12 | -2^95 to (2^95)-1
| wchar_t | 2 or 4 | 1 wide character

## 05 - Operators in C++

1. Arithmetic operators ( +, -, *, /, % )
2. Assignment operator (=)
3. Compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
4. Increment and decrement (++, --)
5. Relational and comparison operators ( ==, !=, >, <, >=, <= )
6. Logical operators ( !, &&, || )
7. Conditional ternary operator ( ? )
8. Comma operator ( , )
9. Bitwise operators ( &, |, ^, ~, <<, >> )

> To get a list of operator precedence , go to - https://en.cppreference.com/w/cpp/language/operator_precedence

## 06 - C++ Control Structures

- Basic  Control Structure -                        
1. Sequence Structure
2. Selection Structure (if..else , if..else if..else , switch..case)
3. Loop Structure (for , while , do...while)
<hr>
1. Sequence Structure ---> Entry ---> Action1 ---> Action2 ---> Exit<br>
2. Selection Structure ---> Entry ---> Condition --> if true --> Action1 ---> if false --> Action2 ---> Exit<br>
3. Loop Structure ---> Entry ---> Condition --> if true --> Action1 in loop until termination ---> if false --> Action2 ---> Exit <br>

### Loops in C++

There are three types of loops in C++:
1. For Loop
2. While Loop
3. do-While Loop

**for Loop Syntax :**
```cpp
for(initialization; condition; updation) {
    loop body(C++);
}
```

**while Loop Syntax :**
```cpp
while(condition) {
    statements;
}
```

**do-while Loop Syntax :**
```cpp
do {  // atleast runs 1 time
    statements;
}while(condition);
```


