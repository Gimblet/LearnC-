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

inline void getAdress(int *ptr)
{
  *ptr = 50; // Deference Operator
}

int main()
{
  setAdress();
  return 0;
}