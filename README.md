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

## 07 - Arrays in C++

- An array is a collection of items of similar type stored in contiguous memory locations.
- Sometimes, a simple variable is not enough to hold all the data.
- For example, lets say we want to store the marks of 2500 students, having 2500 different variables for this task is not feasible.
- To solve this problem, we can define an array with size 2500 that can hold the marks of all students.

## 08 - Why OOPS?

- C++ language (initially called C with classes) was designd with the main intention of adding object-oriented features to C language.
- As the size of the program increases, readability, maintainability and bug-free nature of programs decreases.
- This was the major problem with languages like C which relied upon functions or procedures (hence the name procedural programming language).
- As a result, the possibility of not addressing the problem in an effective manner was high.
- Also, as data was almost neglected, data security was easily compromised.
- Using classes solves this problem by modelling program as a real world scenario.

### Procedure Oriented Programming 

- Consists of writing a set of instruction for the computer to follow.
- Main focus is on functions and not on flow of data.
- Functions can either use local or global data.
- Data moves openly from function to function.
> Main focus is on functions.

### Object Oriented Programming 

- Works on he concept of calsses and objects.
- A class is  a template to create objects.
- Treats data as a critical element.
- Decomposes the problem in objects and builds data and functions around the objects.
> Main focus is on data.

### Basic Concepts in Object Oriented Programming

- Classes - Basic template for creating objects (Memory is not allocated until object is made).
- Objects - Basic run time entities.
- Data Abstraction & Encapsulation - Wrapping data and functions into single unit.
- Inheritance - Properties of one class can be inherited into others.
- Polymorphism - ability to take morethan one forms.
- Dynamic Binding (OR late binding) - code which will execute is not known until the program runs.
- Message Passing - Object.message(Information) call format.

### Benefits Of Object Oriented Programming

- Better code reusability using objects and inheritance.
- Principle of data hiding helps build secure systems.
- Multiple objects can co-exist without any interference.
- Software complexity can be easily managed.

## 09 - OOP Features

**Overview**
- Abstraction
- Encapsulation
- Inheritance
- Polymorphism

**Abstraction**

> Providing essential features, but hiding the bacground details.

A user is aware of the fact that what a user defined type is capable of doing. Or what are the functionalities attached to that UDT. But not aware of the fact that how these are implemented.<br>
For example, **stack** as a UDT. We can **push** an element to the stack and **pop** an element from the stack. But the user cannot know how the stack is implemented. A stack may either be implemented with the help of a **linked list** or with an **array**.

**Encapsulation**

> The act of hiding information.

All data access must occur through the public interface. Thus, the data fields of an object are effectively hidden from the user.<br>
For example, inside a class member, variables are declared as private to restrict the direct access.

**Inheritance**

> A process thorough which a derived class acquires the properties of a base class.

The concept of reusability comes from inheritance. We don't need to redeclare the properties of the base class again.

**Polymorphism**

> It is a combination of two words namely poly means **many** and morphs means **forms**.

In OOPs, a function can take many forms according to different circumstances. Same function can behave differently with different signature. This polymorphic behavior can be **static** or **dynamic**.

## 10 - Objects Memory Allocation in C++

- The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

- The memory is only allocated to the variables of the class when the object is created. 
- The memory is not allocated to the variables when the class is declared. 
- At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class.
- Memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.