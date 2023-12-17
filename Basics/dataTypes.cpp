#include <iostream>
#include <string> //! Using the string class
using namespace std;

int main()
{
  // Some Data Types
  char normalChar = 'j';
  int intDataType;
  float floatDataType = 3.4;
  double doubleDT;
  char16_t char16Bits;
  unsigned int notLessThanCero = 65536;
  signed int upTo32767 = -32768;
  std::string why = "Why do Strings have to be this way"; //? Unlike other languages, the string class is not used by default, so we have to include it. In order to use it as a declaration for a data type, we must use it with std::string VARNAME
  string myString = "This is a string";                   // using namespace std removes the need to write std:: in the type declaration, making strings more similar to other languages

  //! Special DataTypes
  auto byASpecificValue = 38.8; // Basically the same (float)
  auto putMeAValue = doubleDT;  // In this case the auto type reads that im initializing putMEAValue with doubleDT, therefore, it gives putMeAValue, the double type.

  decltype(normalChar) IJustCopiedNormalChar; // using the decltype() type means that we can copy the type of and existing variable, in this case we have given the type of normalChar to the declared Variable, so is a char type.

  //? Some C++ Unique ways to asign value / Initialize a variable
  int strange(5);
  double evenStranger{5}; // These two ways are equal to the above used decalaration

  //! Let's test

  int a, b;
  int result;

  // Asign value to the variables

  a = 27;
  b = 28;

  //? Subtracts b - a
  result = 28 - 27;

  // Prints the variable result

  std::cout << result;

  // Terminate the program
  return 0;
}