#include <iostream>
/**
  The following are constants decalarations as a preprocesor instance of the user defined constants
  syntax: #define identifier replacement
**/
#define PI 3.14169
#define TAB '\t'
using namespace std;

int main()
{
  //! Constant values
  //! We will write literal constants
  // If they are numbers (Integers) they all have a default value of int
  1080; // Decimal
  0113; // Octal
  0x43; // Hexadecimal

  /*
    C++ supports differents types of constanst, for instance, if you want an unsigned constant you can add the
    letter u at the end of the number, for more types and examples check the documentation
  */

  //? integer literals
  65u; // Unsigned
  65l; // Long

  //? floating point literals
  3.1416f; // Float
  6.02e23; // Scientific notation (6.02 x 10^23) "e" is used to indicate the power of 10
  1.6e-19; // Scientific notation (1.6 x 10^-19)

  //? character and String literals
  'A';           // Character (Characters are usually defined with 'single quotes')
  "Hello World"; // String (Strings must be with "double quotes")

  string x = "String written in \
  two lines \n"; // String represented in two lines if there is no "\" at the end of the line it will throw an error
  cout << x;

  u8"(Hello World )";                                                            // UTF-8 String
  cout << R"(This String is in a raw State \ \n it wont go 1line down)" << '\n'; // Raw String (It will print the string as it is)

  //! Constant variables
  //! const keyword
  // We will make a variable constant by using the const keyword in order to give a name to a constant value for convenience

  const double em = 1.453;
  const char newline = '\n';
  double finalValue = 3.5; // We cannot use the const keyword here because we are going to change this value later

  finalValue = em * finalValue;
  cout << "uwu" << newline << "owo" << newline;
  cout << finalValue << newline;

  //! user defined constants
  // As seen at the begginig of the program we can define our own constants using the #define preprocessor
  // The #define does not need a semicolon at the end of the line as its not a statement
  // For this program we defined two constants PI and TAB which we will use in the following lines

  cout << PI << newline;
  cout << "Hello World" << TAB << "Im using defined constants";

  // exits the program
  return 0;
}