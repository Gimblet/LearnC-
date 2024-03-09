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

//? Pointers and Arrays
// Pointers and arrays are very similar. The only diference being that an array cannot be reassigned to another address, while a pointer can.
// Therefore it is possible to use pointers to iterate through an array. Doing the following operation valid.

inline void arraysAndPointers()
{
  int array[3] = {1, 2, 3};
  int *p = array; //* Valid

  cout << "\nArrays and Pointers" << endl;

  *p = 10; // Equals array[0] = 10

  p++;     // Equals array[1]
  *p = 20; // Equals array[1] = 20

  p = &array[2]; // Equals array[2]
  *p = 30;       // Equals array[2] = 30

  for (int i = 0; i < 3; i++)
  {
    cout << array[i] << endl;
  }

  // More Operations

  cout << "\nMore Operations w arrays" << endl;

  p = array + 2; // Equals array[2]
  *p = 300;      // Equals array[2] = 300

  p = array;      // Equals array[0]
  *(p + 1) = 200; // Equals array[1] = 200

  for (int i = 2; i >= 0; i--)
  {
    cout << array[i] << endl;
  }
}

//? Pointer Initialization
/*
  Pointers might be intialized in the very first moment they are declared.

  int *ptr = &var;

  Pointers can be initialized to another pointer, array or address of a variable.
*/

//? Pointer Arithmetics

// We have to take into consideration that arithmetic operations on pointers are different from those of regular types.
//* Only addition and subtraction operations are allowed on pointers, and the result of these operations are highly influenced by the type's size on bytes. (The size might vary depending on the os)

/*
  If we supose that the size of a char is 1 byte, the size of a short is 2 bytes and the size of a long is 4 bytes, when doing increment the result on the adress would be as follows:

  char *charPtr;
  short *shortPtr;
  long *longPtr;

  ++charPtr; // Equals charPtr + 1
  ++shortPtr; // Equals shortPtr + 2
  ++longPtr; // Equals longPtr + 4
*/

void pointerArit()
{
  int *p, *q;
  cout << "\nPointer Arithmetics" << endl;

  // From this point on we need to know the rule of prescende for the suffixes and prefixes of the ++ and -- operators.
  //! In a prefix, the increment is done BEFORE the evaluation of the expression, while in a suffix the increment is done AFTER the evaluation of the expression. Therefore:

  *p++;   //* same as *(p++): increment pointer, and dereference unincremented address
  *++p;   //* same as *(++p): increment pointer, and dereference incremented address
  ++*p;   //* same as ++(*p): dereference pointer, and increment the value it points to
  (*p)++; //* dereference pointer, and post-increment the value it points to

  // In the first case, the pointer is incremented first, however as the dereference operator is a suffix, the value of the pointer is the one before the increment.
  // In the second case, the pointer is incremented first, and then the value of the pointer is the one after the increment.
  // In the third case, the value of the pointer is deferenced. With the value now gotten, it is incremented by one.
  // In the fourth case, the value of the pointer is dereferenced and then incremented by one.

  //! A often used case with incremeted pointers:

  *p++ = *q++;
  /*
    Equals to: *p = *q;
    p++;
    q++;
  */
}

//! The brackets in the arrays are a some sort of dereference operator called the subscript operator. It is used to get the value of the variable that the pointer is pointing to.

int main()
{
  setAdress();
  declarePointers();
  arraysAndPointers();
  return 0;
}