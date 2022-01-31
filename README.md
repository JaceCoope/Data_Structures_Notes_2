# Data_Structures_Notes_2
* Consider the following point in class
```cpp
#include <io stream>
using namespace std;
class Point
{
   private:
        double_x;
        double_y;
   public:
        Point();
        Point(double x, double y);
        void display();
};
```
C++ 3 Categories of data
Primitive

Classes

Pointer: 
* **Pointer** contain the memory addresses of the variable.
* It is possible to perform some arithmetic on pointers, but in general they do not participate in most operations possible on.


* **Classes** can be related in one or more hierarchies but primitive types do not belong to any hierarchy
* The programmer can create new classes but cannot create new primitive types.


* **Identifiers** are the names given by programmers to objects in a program.
  * In C++, identifiers can be of any length
  * They must start with a letter or underscore


* C++ is case-sensitive.
* So, Stack and stack are distinct identifiers.


* char, int, short, and long are all int types
* char and short use less memory, but get promoted to int just in case
* Some C++ compilers don't have the bool type (true or false)
* So, integer values can be used. 0 being false, with anything else being true

Pass by Copy


# Chapter Two: Algorithms and Recursions
Algorithm : A sequence of steps that solves a problem.
An Algorithm consists of:
- Input: Number and type of input values must be made clear
- Precise specification of each step: Each step or instruction must be feasible and unambiguously defined
- Finiteness: For all possible inputs, the algorithm must terminate in finite time
- Result: The objective of the algorithm must be made clear. There may be an output that spells out the execution of the algorithm
- Resources generally attributed to a computer algorithm are space and running time.
- Space complexity: Amount of memory required
- Time complexity: Amount of time to complete execution


- Running time and space required are expressed as a function of input size n.
- Example: Algorithm which reads n numbers and prints them
  - Time complexity = n
  - Space complexity = 1


Study of Effectiveness of an Algorithm
- An approach to evaluate the effectiveness of an algorithm