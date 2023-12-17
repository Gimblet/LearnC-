#include <iostream>
using namespace std;

// https://cplusplus.com/doc/tutorial/operators/

int main()
{
  // Assigment operator (=)
  int x = 5; // This operator is widely used so we will not explain it

  //? Modulo Operator % (Arithmetic Operators)
  int y = 5 % 2; // This operator returns the remainder of the division of the two numbers
  // In the example above we are dividing 5 by 2 which will not give us an exact division, so the remainder is 1 (Because 4/2 = 2 but we left 1 one number to have that result) that being the new y value

  //? Compound Assignment Operators (+=, -=, *=, /=, %=)
  // These operators are used to modify the value of a variable
  // For example:
  int z = 5;
  z += 2; // This is the same as z = z + 2; (z = 5 + 2;) its basically the same as the other operators

  //? Increment and Decrement Operators (++, --)
  // These are also widely known, so we will only cover the prefix and postfix operators
  /*
    There is a difference when using the operators before or after the variable.
    When used before the variable, it will increase or decrease the value of the variable
    and then return the value. When used after the variable, it will return the value
    and then increase or decrease the value of the variable.
  */

  // for example:
  //! Prefix
  x = 3;
  y = ++x;
  // x contains 4, y contains 4

  //! Postfix
  x = 3;
  y = x++;
  // x contains 4, y contains 3

  //? Relational Operators (==, !=, >, <, >=, <=)
  // These operators are used to compare two values and return a boolean value (true or false)

  //? Logical Operators (&&, ||, !)
  // "!" is used to negate a boolean value
  // so everytime a boolean value is true, ! will make it false and viceversa

  int a = 10;
  int b = 10;

  cout << (a == b) << '\n';  // true(1)
  cout << !(a == b) << '\n'; // false(0)

  // "&&" is used to check if two boolean values are true
  // "||" is used to check if one of the two boolean values are true
  // They are bot calculated from left to right with a truth table, to check the full table refer to the documentation
  // for example:

  cout << ((a == b) && (a != b)) << '\n'; // false(0)
  cout << ((a == b) || (a != b)) << '\n'; // true(1)

  //! The most important thing here is to know that in certain scenarios only one expression will be evaluated, especially dangerous if some operations are made in the second part of the expression

  //? Ternary Operator (? :)
  // This operator is used to assign a value to a variable based on a condition
  // for example:

  int c = 10;
  int d = 20;
  int e = (c > d) ? c : d; // if c is greater than d (True), e will be equal to c, if not(False), e will be equal to d

  cout << e << '\n';

  //? Comma Operator (,)
  // This operator is used to separate two or more expressions that are included where only one expression is expected
  // for example:

  a = (b = 3, b + 2);

  // This will make a have the 5 value and b will have the 3 value

  //? Explicit type casting

  // Allow us to convert a value of a given type to another type
  // There is two ways to do this in c++

  //! C-like casting
  // This is the old way to do it, it is not recommended to use this way
  // For example:

  int t;
  float f = 3.14;
  t = (int)f;

  // This made the f value to be converted to an int value and asign it to the t variable losing the decimal part of the number in the process

  //! C++ casting
  // This is the new way to do it, it is recommended to use this way
  // For example:

  t = int(f);
  // This is the same as the example above

  cout << t << '\n';

  //? sizeof operator
  // This operator is used to get the size of a variable or a type
  // for example:

  float l = 4.23;
  x = sizeof(l); // This will return the size of l in byte (also work in types like int, char, etc. )

  cout << x << '\n';

  //? Precedence of Operators
  // There is a hirearchy of operators in c++ that will make certain operators to be evaluated first than others, we can change this hirearchy by using parenthesis
  // For full info check the documentation

  return 0;
}