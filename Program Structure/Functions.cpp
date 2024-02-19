#include <iostream>

using namespace std;

//!  Functions
//! https://cplusplus.com/doc/tutorial/functions/

/* Functions are a group of statements that can be called later on the program to perform a specific task. These functions can have arguments (Paremeters).
Functions can either have a return type or not. If the functions do not have a return type, they are called void functions.*/

//? Rules in functions

//! Must have a return type or void
//! Function must be declared before the main function.
/* To bypass this rule, we can use a function prototype, which is a declaration of the function before the main function. We can do this by writing the type of the function, the very same name and their parameters types.
The parameters names are not necessary in the prototype, but including them will improve legibility */
//! The value of the arguments can either be copied of passed by reference
/* Unlike other languages, C++ offers 2 options when working with paramenters. The most common one is to pass the arguements by value, when passed in this way the arguments' value is only copied, yet the original variable is the same (No matter
if you modified the value directly inside the function. When passing the arguments by reference makes the program lighter since it doesnt have to copy already known values. To pass by reference an & is needed to be placed before the arguments' name */
//! Functions may be inline or not
// Inline functions are generally faster since they are not called, but rather the code is copied directly into the main function. This is useful for small functions, but not for large ones.

//? Recursivity in Functions

//! Recursivity is the ability of a function to call itself. This is useful when working with problems that can be divided into smaller problems of the same type. The most common example of this is the factorial function.

int divide(int, int); //? Prototype function (With no parameters names)
void modTesting(int &, int);
double multiply(double a, double b = 10);
void recursivity(int &);

int main()
{
  int ModifiableValue = 10, NonModifiableValue = 10, n = 0;

  cout << divide(10, 2) << endl;
  modTesting(ModifiableValue, NonModifiableValue);
  cout << "ModifiableValue = " << ModifiableValue << endl;
  cout << "NonModifiableValue = " << NonModifiableValue << endl;
  cout << "Inline Function : " << multiply(5) << endl; // Will output 50 because it has already the 10 b value in the first declaration

  recursivity(n);
  cout << "Times Repeated : " << n << endl;

  return 0;
}

int divide(int a, int b) // Definition of the function
{
  return a / b;
}

void modTesting(int &a, int b) //? "a" is passed by reference, b isn't
{
  a = a + 10; // Will modify "ModifyableValue" in the main function
  b = b + 10; // Will not modify "NonModifiableValue" in the main function
}

inline double multiply(double a, double b)
{
  return a * b;
}

void recursivity(int &n)
{
  n++;
  if (n >= 3)
  {
    goto endLoop;
  }
  recursivity(n);
endLoop:
  cout << "The loop is all over \n";
}