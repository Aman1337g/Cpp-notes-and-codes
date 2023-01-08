## <center>**3rd Semster 2014**</center>

**Ans 1. 
(a)**

### Polymorphism in C++

**Poly means several and morphism means form**. Polymorphism is something that has several forms or we can say it as one name and multiple forms.<br>There are two types of polymorphism:
- Compile-time polymorphism
- Run time polymorphism
 
### Compile Time Polymorphism

In compile-time polymorphism, it is **already known which function will run.** Compile-time polymorphism is also called **early binding**, which means that you are already bound to the function call and you know that this function is going to run.

There are two types of compile-time polymorphism:

- **Function Overloading** <br>
This is a feature that lets us create more than one function and the functions have the same names but their parameters need to be different. When function overloading is implemented in a program and function calls are made, the compiler knows which functions to execute.

- **Operator Overloading** <br>
This is a feature that lets us define operators working for some specific tasks. Using the operator +, we can add two strings by concatenating and add two numerical values arithmetically at the same time. This is operator overloading.

### Run Time Polymorphism

With run-time polymorphism, the compiler has no idea what will happen when the code is executed. Run time polymorphism is also called **late binding**. The run-time polymorphism is considered slow because function calls are decided at run time. Run time polymorphism can be achieved from virtual functions.

**(b)**

In C++, a static member function is a member function of a class that has the **static** keyword in its declaration. Some key characteristics of static member functions in C++ are:

1. They are member functions of a class, but they are not tied to a specific object of the class.
2. They can be called using the class name and the scope resolution operator, rather than an object of the class. For example: ```ClassName::staticFunction()```
3. They do not have access to the **this** pointer, because they are not tied to a specific object.
4. They can only access other static members of the class (variables or functions).
5. They are often used to perform tasks that do not depend on the state of a specific object, or that need to be shared by all objects of the class.
6. They are usually defined inside the class definition, but they can also be defined outside the class in the same way as other global functions.
7. They are declared using the static keyword in the class definition.<br>
Here is an example of a class with a static member function in C++:
```cpp
#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x, int y) : x(x), y(y) { numPoints++; }

    static int getNumPoints() { return numPoints; }
    void getPoints()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

private:
    int x;
    int y;
    static int numPoints;
};

int Point::numPoints = 0;
/* The getNumPoints() function can be called as follows:
   Point::getNumPoints();
*/
int main()
{
    Point p1 = Point(1, 2);
    cout << "Point no. : " << Point ::getNumPoints();
    cout << endl;
    p1.getPoints();
    cout << endl;
    Point p2(23, 90);
    cout << "Point no. : " << p2.getNumPoints();
    cout << endl;
    p2.getPoints();
}
```
Output :
```
Point no. : 1
x = 1, y = 2

Point no. : 2
x = 23, y = 90

```

**(c)**

In C++, a pointer is a variable that stores the memory address of another variable. A reference is an alias for another variable, which means that it is another name for the same memory location. Here are some key differences between pointers and references in C++:

1. Pointers use the ```*``` operator to access the value they point to, while references use the ```&``` operator to access the value they refer to.
2. Pointers can be reassigned to point to different variables, while references cannot be changed to refer to a different variable once they are initialized.
3. Pointers can be null, while references cannot be null.
4. Pointers have their own memory address, while references do not have their own memory address.<br>
Here is an example of how pointers and references can be used in C++:
```cpp
#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *p = &x; // p is a pointer to x
    int &r = y;  // r is a reference to y

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "r = " << r << endl;

    *p = 30;
    r = 40;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "r = " << r << endl;
    cout << endl;

    int z = 89;
    p = &z; // p is now pointing to variable z
    cout << "p = " << p << endl;
    cout << "&z = " << &z << endl;
    cout << "z = " << z << endl;
    cout << "*p = " << *p << endl;
    cout << "x = " << x << endl;
    // &r = z;    // cannot refer to another variable
    
    return 0;
}
```
Output :
```
x = 10
y = 20
p = 0x61ff04
*p = 10
r = 20
x = 30
y = 40
p = 0x61ff04
*p = 30
r = 40

p = 0x61fefc
&z = 0x61fefc
z = 89
*p = 89
x = 30

```

**(d)**

(i) int const *p;
This means that "p" is a pointer to a constant integer. This means that the integer value stored at the memory location pointed to by "p" cannot be modified. However, the value of "p" itself can be changed to point to a different memory location.

(ii) int *const p;
This means that "p" is a constant pointer to an integer. This means that the value of "p" itself cannot be changed to point to a different memory location. However, the integer value stored at the memory location pointed to by "p" can be modified.

Example :
```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 89;
    int b = 23;

    int const *p = &a; // pointer to a constant integer
    int *const q = &a; // constant pointer

    a = 92;
    cout << "p = " << p << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    // *p = 92; // error
    p = &b; // can point to another variable
    cout << "*p = " << *p << endl;
    cout << endl;
    cout << "q = " << q << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "*q = " << *q << endl;
    *q = 33;
    cout << "*q = " << *q << endl;
    cout << "a = " << a << endl;
    // q = &b; //error

    return 0;
}
```
Output :
```
p = 0x61ff04
&a = 0x61ff04
a = 92
*p = 92
*p = 23

q = 0x61ff04
&a = 0x61ff04
a = 92
*q = 92
*q = 33
a = 33

```

**(e)**

The value of "x" after executing the code would be -2.

The "~" operator is the bitwise NOT operator in C++. It inverts the bits of its operand. In this case, the operand is the short int variable "x", which has a value of 1.

Since short ints are 2 bytes in size, the value of "x" can be represented in binary as follows:

00000000 00000001

The bitwise NOT operator inverts all of the bits in this binary representation, resulting in the following binary value:

11111111 11111110

This binary value can be converted back to a decimal value, which is -2. Therefore, the value of "x" after executing the code would be -2.

2 in binary is 00000000 00000010
1's complement = 11111111 11111101
2's complement = 11111111 11111110 (Equal to -1)

**(f)**

Given code :
```cpp
#include <iostream>
using namespace std;

void f(int *p, int *q)
{
    p = q;
    *p = 2;
}
int i = 0, j = 1;
int main()
{
    f(&i, &j);
    cout << "i=" << i << " j=" << j << endl;

    return 0;
}
```
Output :
```
i=0 j=2
```
The program will print "i=0 j=2".

The function f() takes two pointers, **p** and **q**, as arguments. Inside the function, it sets **p** to point to the same location as **q**, but it does not change the value of **q** itself. It then dereferences **p** and sets the value at the location pointed to by **p** to 2. Since **p** is pointing to the same location as **q**, this changes the value of **q** to 2. However, the value of **i** is not changed because the function does not modify **i** directly.

**(g)**

```malloc``` and ```new``` are both functions that allocate memory dynamically during the execution of a program. They have some differences, however:

1. ```malloc``` is a C function, whereas ```new``` is a C++ operator.
2. ```malloc``` takes a single argument, which is the number of bytes of memory to allocate. ```new``` can take an optional number of arguments, which can be used to initialize the memory that is allocated.
3. ```malloc``` returns a void pointer, which must be cast to the appropriate type before it can be dereferenced. ```new``` returns a pointer to the type of object being allocated, so no explicit type casting is necessary.
4. ```malloc``` does not call the object's constructor, so the memory it allocates is not initialized. ```new``` calls the object's constructor to initialize the memory it allocates.
5. If ```malloc``` fails to allocate the requested memory, it returns a null pointer. If ```new``` fails to allocate the requested memory, it throws a ```std::bad_alloc``` exception.<br>
Here is an example of how ```malloc``` and ```new``` can be used to allocate memory for an integer:
```cpp
#include <cstdlib> // for ```malloc```
#include <iostream>

int main()
{
    int *p1 = (int *)malloc(sizeof(int)); // allocate memory with ```malloc```
    if (p1 == nullptr)
    {
        std::cout << "Error allocating memory with malloc" << std::endl;
        return 1;
    }

    int *p2 = new int; // allocate memory with new
    if (p2 == nullptr)
    {
        std::cout << "Error allocating memory with new" << std::endl;
        return 1;
    }

    return 0;
}
```

**(h)**

In C++, the following operators cannot be overloaded through a non-member function:

- . (member access)
- .* (pointer-to-member access)
- :: (scope resolution)
- ?: (ternary conditional)<br>
These operators must be overloaded as member functions.

For example, to overload the ```+``` operator for a class ```MyClass```, we could define the **operator+** function as a member function like this:
```cpp
class MyClass {
 public:
  MyClass operator+(const MyClass& other) const {
    // implement the operator+ function here
  }
};
```
Alternatively, we could define ```operator+``` as a non-member function:
```cpp
class MyClass {
  // ...
};

MyClass operator+(const MyClass& lhs, const MyClass& rhs) {
  // implement the operator+ function here
}
```
In either case, we can use the overloaded ```+``` operator with objects of type ```MyClass``` like this:
```cpp
MyClass a, b, c;
c = a + b;
```

**(i)**

A copy constructor is called in the following situations:

1. When an object of a class is returned by value from a function. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  // ...
};

MyClass get_object() {
  MyClass obj;
  // initialize obj
  return obj;  // copy constructor called here
}

int main() {
  MyClass a = get_object();  // copy constructor called here
  return 0;
}
```
2. When an object of a class is passed by value as an argument to a function. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  // ...
};

void print_object(MyClass obj) {  // copy constructor called here
  // print obj
}

int main() {
  MyClass a;
  print_object(a);  // copy constructor called here
  return 0;
}
```
3. When an object is constructed from another object using the assignment operator. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  MyClass& operator=(const MyClass& other);  // assignment operator
  // ...
};

int main() {
  MyClass a, b;
  a = b;  // copy constructor called here
  return 0;
}
```
4. When an object is used to initialize another object using uniform initialization. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  // ...
};

int main() {
  MyClass a, b = a;  // copy constructor called here
  return 0;
}
```
5. When an object is constructed from another object using the copy initialization syntax. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  // ...
};

int main() {
  MyClass a;
  MyClass b(a);  // copy constructor called here
  return 0;
}
```
6. When an object is constructed from another object using the direct initialization syntax. For example:
```cpp
class MyClass {
 public:
  MyClass(const MyClass& other);  // copy constructor
  // ...
};

int main() {
  MyClass a;
  MyClass b = MyClass(a);  // copy constructor called here
  return 0;
}
```

**(j)**

In C++, we can use the ```noexcept``` specifier in the function declaration to specify that the function will not throw any exceptions. For example:
```cpp
void someFunction() noexcept {
    // function code here
}
```
This specifies that the **someFunction()** function will not throw any exceptions. If an exception is thrown from within this function, the program will terminate.

Alternatively, we can use a **try-catch** block to handle exceptions thrown by a function. We can specify the type of exception that we want to catch in the catch block. For example:
```cpp
try {
    someFunction();
} catch (SomeExceptionType& e) {
    // handle the exception
}
```
This will catch any exceptions of type **SomeExceptionType** that are thrown by the **someFunction()** function. If an exception of a different type is thrown, it will not be caught by this catch block and will propagate up the call stack.

Finally, we can use the **throw** keyword in the function declaration to specify the types of exceptions that the function may throw. For example:
```cpp
void someFunction() throw (SomeExceptionType) {
    // function code here
}
```
This means that the **someFunction()** function may throw an exception of type SomeExceptionType. The caller of the function will need to use a try-catch block to handle this exception.

<br>

**2 (a)**

Code :
```cpp
#include <iostream>
#include <math.h>
using namespace std;

class Sphere
{
protected:
    double radius;

public:
    void setR()
    {
        cout << "Enter radius of the sphere : ";
        cin >> radius;
    }
    void volD()
    {
        double volume = (4.0 / 3.0) * 3.14 * pow(radius, 3);
        cout << "Volume of the sphere with radius " << radius << " units is : " << volume << " cubic units.";
    }
};

int main()
{
    Sphere s1;
    s1.setR();
    s1.volD();

    return 0;
}
```
```
Output

Enter radius of the sphere : 4.23
Volume of the sphere with radius 4.23 units is : 316.876 cubic units.
```

**2 (b)**

Code :
```cpp
#include <iostream>
using namespace std;

class Student
{
private:
    string stud_name;
    int stud_id;
    float stud_mark;

public:
    Student(int id, string name, float mark)
    {
        stud_id = id;
        stud_name = name;
        stud_mark = mark;
    }
    void display()
    {
        cout << "Student ID : " << stud_id << endl
             << "Name : " << stud_name << endl
             << "Mark : " << stud_mark << endl
             << endl;
    }
};

int main()
{
    Student s1(01, "Abhisek Gupta", 89);
    s1.display();

    Student s2(02, "Abhishek Upadhaya", 95.5);
    s2.display();

    return 0;
}
```
```
OUTPUT

Student ID : 1
Name : Abhisek Gupta
Mark : 89

Student ID : 2
Name : Abhishek Upadhaya
Mark : 95.5


```

**3 (a)**

Function overloading is a feature in C++ that allows a single function to have multiple definitions with different signatures. The signature of a function is determined by its name and the number, types, and order of its parameters.

There are several ways to overload a function in C++:

1. **By number of parameters:** We can have multiple versions of a function with a different number of parameters. For example:
```cpp
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}
```
Here, the ```sum()``` function is overloaded with two definitions: one that takes two ```int``` parameters and one that takes three ```int``` parameters.

2. **By type of parameters:** We can have multiple versions of a function with different types of parameters. For example:
```cpp
int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}
```
Here, the ```sum()``` function is overloaded with two definitions: one that takes two ```int``` parameters and one that takes two ```float``` parameters.

3. **By order of parameters:** We can have multiple versions of a function with a different order of parameters, ```as long as the types are different```. For example:
```cpp
float sum(int a, float b) {
    return a + b;
}

float sum(float a, int b) {
    return a + b;
}
```
Here, the ```sum()``` function is overloaded with two definitions: one that takes one ```int``` and one ```float``` parameter in the ```order (int, float)``` and one that takes one ```int``` and one ```float``` parameter in the ```order (float, int)```.

> Note that overloading a function based solely on the order of the parameters is generally considered bad practice, as it can lead to confusion and make the code harder to understand.

It is important to note that function overloading is only allowed if the different versions of the function have different signatures. This means that we cannot overload a function based on the return type or the names of the parameters.

**3 (b)**

Code :
```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
protected:
    double a, b, c;

public:
    Triangle(double d, double e, double f) : a(d), b(e), c(f) {}

    void area(double x, double y) { cout << "Area of the triangle with sides " << x << " unit and " << y << " unit is " << 0.5 * x * y << " sq. units"; }
    void area(double x, double y, double z)
    {
        double s = (x + y + z) / 2.0;
        double q = s * (s - a) * (s - b) * (s - c);
        double ar = pow(q, 0.5);
        cout << "Area of the triangle with sides " << x << ", " << y << ", " << z << " units is " << ar << " sq. units";
    }

    void check_and_display()
    {
        double d, e, f;
        d = a;
        e = b;
        f = c;
        if (d < e + f && e < d + f && f < d + e)
        {
            if (d * d == e * e + f * f)
            {
                cout << "Triangle is right !!" << endl;
                area(e, f);
            }
            else if (e * e == d * d + f * f)
            {
                cout << "Triangle is right !!" << endl;
                area(d, f);
            }
            else if (f * f == e * e + d * d)
            {
                cout << "Triangle is right !!" << endl;
                area(e, d);
            }
            else
            {
                cout << "Triangle is not right angled !!" << endl;
                area(d, e, f);
            }
        }
        else
            cout << "Invalid Triangle !!";
    }
};

int main()
{
    double a, b, c;
    cout << "Enter side1 : ";
    cin >> a;
    cout << "Enter side2 : ";
    cin >> b;
    cout << "Enter side3 : ";
    cin >> c;

    Triangle t1(a, b, c);
    t1.check_and_display();

    return 0;
}
```
```
OUTPUT

Enter side1 : 5
Enter side2 : 6
Enter side3 : 7
Triangle is not right angled !!
Area of the triangle with sides 5, 6, 7 units is 14.6969 sq. units
```

**4 (a)**

In C++, inheritance is a mechanism that allows one class (called the derived class) to inherit the properties and methods of another class (called the base class). Inheritance is a way to create a new class that is a modified version of an existing class, without having to rewrite the existing class.

Here is an example of inheritance in C++:
```cpp
#include <iostream>
using namespace std;
// Base class
class Shape
{
protected:
    int width, height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(7);

    // Print the area of the rectangle
    cout << "The area of the rectangle is: " << rect.getArea();
    return 0;
}
```
``` 
OUTPUT

The area of the rectangle is: 35
```
In this example, the ```Rectangle``` class is derived from the ```Shape``` class. This means that the ```Rectangle``` class inherits the ```setWidth()``` and ```setHeight()``` methods of the Shape class. The Rectangle class also has its own method, ```getArea()```, which calculates area of the rectangle.

**Multilevel inheritance** is a type of inheritance in which a derived class is derived from another derived class. This means that the derived class inherits the properties and methods of the base class, as well as the properties and methods of the intermediate derived class.

Here is an example of multilevel inheritance in C++:
```cpp
#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void seta(int x) { a = x; }
};
class B : public A
{
public:
    int b;
    void setb(int x) { b = x; }
};
class C : public B
{
public:
    int c;
    void setc(int x) { c = x; }
    int sum()
    {
        return a + b + c;
    }
};

int main()
{
    C test;
    test.seta(1);
    test.setb(2);
    test.setc(3);
    cout << "Sum : " << test.sum();

    return 0;
}
```
```
OUTPUT

Sum : 6
```
In this example, ```C``` class is derived from the ```B``` class, which is derived from the ```A``` class. This means that the ```C``` class, inherits the ```seta()``` and ```setb()``` methods of the ```A``` class, as well as the B class respectively. The ```C``` class also has its own mehtods ```setc()``` to set the integer variable c and ```sum()```, returns the sum a+b+c.

**4 (b)**

In C++, ambiguity can occur in multipath (diamond) inheritance when a derived class has multiple copies of the same attribute due to inheritance from multiple base classes. This can be resolved using a **virtual base class**.

A **virtual base class** is a base class that is **inherited virtually, meaning that only one copy of the base class is inherited by the derived class**, even if the derived class is inherited from multiple base classes that have the virtual base class in their inheritance hierarchy.

Here is an example of how to use a virtual base class to resolve ambiguity in multipath inheritance:

```cpp
#include <iostream>
using namespace std;

// virtual base class
class A
{
protected:
    int a;

public:
    void setA(int x) { a = x; }
};

// Base class 1
class B : virtual public A
{
protected:
    int b;

public:
    void setB(int x) { b = x; }
};
// Base class 2
class C : virtual public A
{
protected:
    int c;

public:
    void setC(int x) { c = x; }
};
// Derived class
class Derived : public B, public C
{
protected:
    int d;

public:
    void sum()
    {
        d = a + b + c;
        cout << "The sum of a, b, c is : " << d << endl;
    }
};
int main()
{
    Derived d1;
    d1.setA(1);
    d1.setB(2);
    d1.setC(3);
    d1.sum();

    return 0;
}
```
```
OUTPUT

The sum of a, b, c is : 6

```
In this example, ```Derived``` class is derived from the ```B``` and ```C``` classes, which are both derived from the virtual base class ```A```. This means there is only one copy of the attribute of ```A``` class is inherited by the ```Derived``` class.