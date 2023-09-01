/* A generic stack emaple */

#include <iostream>
using namespace std;

template <class T>
class mystack
{
   T tarr[5];
   int top;

public:
   void init()
   {
      top = -1;
   }

   void push(T temp)
   {
      if (top >= 4)
         cout << "Stack Overflow" << endl;
      else
      {
         top++;
         tarr[top] = temp;
      }
   }

   void pop()
   {
      if (top <= -1)
         cout << "\nStack Underflow" << endl;
      else
      {
         cout << "The popped element is " << tarr[top] << endl;
         top--;
      }
   }

   void show()
   {
      if (top >= 0)
      {
         cout << "Stack elements are: ";
         for (int i = top; i >= 0; i--)
            cout << tarr[i] << " ";
         cout << endl;
      }
      else
         cout << "Stack is empty!!\n";
   }
};

int main()
{
   mystack<double> stack1;
   stack1.init();
   for (int k = 0; k < 5; k++)
   {
      double dd;
      cout << "Push doubles onto the stack: " << endl;
      cin >> dd;
      stack1.push(dd);
   }
   stack1.show();
   stack1.pop();
   stack1.show();
   cout << "_____________________" << endl;

   mystack<char> stack2;
   stack2.init();
   for (int k = 0; k < 5; k++)
   {
      char cc;
      cout << "Push chars onto the stack" << endl;
      cin >> cc;
      stack2.push(cc);
   }
   stack2.show();
   stack2.pop();
   stack2.show();
   cout << "__________________________" << endl;

   mystack<int> stack3;
   stack3.init();
   cout << "Enter two elements" << endl;
   for (int k = 0; k < 2; k++)
   {
      int cc;
      cout << "Push ints onto the stack" << endl;
      cin >> cc;
      stack3.push(cc);
   }
   stack3.pop();
   stack3.show();
   stack3.pop();
   stack3.show();
   stack3.pop();
   stack3.show();
   cout << "__________________________" << endl;

   return 0;
}
/*
OUTPUT

Push doubles onto the stack:
1.111
Push doubles onto the stack:
1.22
Push doubles onto the stack:
2
Push doubles onto the stack:
3.343
Push doubles onto the stack:
5
Stack elements are: 5 3.343 2 1.22 1.111
The popped element is 5
Stack elements are: 3.343 2 1.22 1.111
_____________________
Push chars onto the stack
a
Push chars onto the stack
Z
Push chars onto the stack
b
Push chars onto the stack
c
Push chars onto the stack
D
Stack elements are: D c b Z a
The popped element is D
Stack elements are: c b Z a
__________________________
Enter two elements
Push ints onto the stack
23
Push ints onto the stack
5
The popped element is 5
Stack elements are: 23
The popped element is 23
Stack is empty!!
Stack Underflow
Stack is empty!!
__________________________

*/