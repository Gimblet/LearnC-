#include <iostream>

using namespace std;

//! Pointers
//! https://cplusplus.com/doc/tutorial/pointers/

// When using pointers we have to know two new operators: (* and &)
// In the case of the ampersand (&) it is used to get the address of a variable
// However when using the asterisk (*) it is used to declare a pointer (Only a pointer can be directly assigned to the address of a variable)

//? Adress-of Operator && Reference Operator

inline void getAdress(int *ptr);

inline void setAdress()
{
  int var = 20;
  int *number = &var; // Declaring pointer and giving it the address of var
  getAdress(number);
  cout << var << endl; // 50 (Changed the value of var without directly using the variable)
}

//? Deference Operator
// It refers to the value of the variable that the pointer is pointing to. The syntax for this is the asterisk (*) symbol followed by the pointer name.

inline void getAdress(int *ptr)
{
  *ptr = 50; // Deference Operator
}

//? Declaring Pointers
// We have already seen declaration of pointers in the first functions. But here we will go in depth.

inline void declarePointers()
{
  int number = 20, age = 10;
  double extended = 20.5;
  int *ptr;     // Declaring a pointer that is pointing to an integer
  double *ptr2; // Declaring a pointer that is pointing to a double

  //* A pointer may be used in more than one variable
  ptr = &number;
  *ptr = 10; //! Changing the value of number to 10
  ptr = &age;
  *ptr = 20; //! Changing the value of age to 20

  ptr2 = &extended;
  *ptr2 = *ptr; //! Changing the value of extended to the value of ptr

  cout << "\nDeclaring Pointers" << endl;

  cout << "\nNumber : " << number << endl; // 10
  cout << "Age : " << age << endl;         // 20
  cout << "Extended : " << *ptr2 << endl;
}

int main()
{
  setAdress();
  declarePointers();
  return 0;
}