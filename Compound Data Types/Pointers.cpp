#include <iostream>
#include <string>

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
// The brackets in the arrays are a some sort of dereference operator called the subscript operator. It is used to get the value of the variable that the pointer is pointing to.
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

//? Pointers and Const
// Pointers may point to constant or non-constant value. To do this we should add the const keyword before the pointer's type. (Its possible to put it after the type)
void constantPointers()
{
  //* The pointer itself does not need to be constant, this means that the pointer may be modified but the value it points to cannot be modified.
  const int constant = 5;
  int data = 10;
  const int *pointer;

  pointer = &constant; // Pointer to constant value
  //* Pointer may also point to a non-constant value. This is possible because it can be implicitly converted to a constant value.
  pointer = &data; // Pointer modified, it is popinting to a non-constant value

  //! Pointers may also be constant themselves. This means that after they a assigned an address, they cannot be reassigned to another address. To declare a constant pointer the const keyword must be placed after the asterisk.
  const int *const constatPointerTC = &constant; // Constant pointer to a constant value
  const int *const constatPointerTN = &data;     // Constant pointer to a non-constant value
}

//? Pointers and Strings
// Strings are a series of characters ending with the null character. Therefore we can use pointers to iterate through the string.

// char *pointerString = "Hello";
//* cout << *(pointerString + 1) << endl; WOULD PRINT e

//? Pointers to Pointers
// Pointers may also point to other pointers. This is useful when working with multidimensional arrays. To declare it just add another asterisk before the pointer's name.

void pointerIntoPointer()
{
  int variable = 10;
  int *regularPointer = &variable;
  int **pointerToPointer = &regularPointer; // Pointer to pointer (The value of pointerToPointer is the address of pointer, which itself has the address of variable)

  cout << "\nPointers to Pointers" << endl;

  cout << "\nPointer pointing to the address of a variable : " << regularPointer << endl; // Adress of variable
  cout << "Pointer pointing to the address of a pointer : " << pointerToPointer << endl;
}

//? Void Pointers
// Void pointers are pointers that do not have a type per-se. Therefore they can be anytype. Their big limitation is that they cannot deference the value they are pointing to. However they can be converted to any other type of pointer.

void getVoidPointersData(void *voidPointer)
{
  cout << "\nVoid Pointers" << endl;

  // To convert a void pointer to a different type we must put between parenthesis the type we want to convert it to followed by a asterisk.

  cout << "\nVoid Pointer Converted to String : " << *(string *)voidPointer << endl; // In this case we also wrote an asterisk before the parenthesis to dereference the value of the pointer
}

//? Invalid Pointers / null pointers
// In this language it is possible to initialize a pointer with an adress that does not exist. As an example we can define both a pointer and an array with just 5 elements, but initialize the pointer with the address of the 6th element.
//! The type of pointer mentioned above will not give an error but it may cause unwanted behavior when the value of the invalid pointer is deferenced by another pointer

// It is indeed possible to declare pointers that "point to nowhere". This is done in any of the following ways:

int *nullPointer1 = 0;
int *nullPointer2 = nullptr;
int *nullPointer3 = NULL;

//? Pointer to Function

// Are used to pass functions as arguments (Parameters) This way we can write less code and delete almost identical functions. The syntax is the following:

int sumFuction(int a, int b)
{
  return a + b;
}

int (*funcPointer)(int, int) = sumFuction; // Type + (PointerName)(Arguments{leave blank if there's none})

//! Real World Example

double multiply(int a, int b)
{
  return a * b;
}

double division(int a, int b)
{
  return a / b;
}

double operation(int x, int y, double (*functionHolder)(int, int)) // By using the pointer to function we can call both division and multiply. This eliminates to need to separatetly call both functions making the code lighter and more human readable.
{
  return functionHolder(x, y);
}

int main()
{
  string username = "Diego";
  setAdress();
  declarePointers();
  arraysAndPointers();
  pointerIntoPointer();
  getVoidPointersData(&username);

  cout << "\nPointer to Function : " << funcPointer(10, 20) << endl;

  cout << "\nPOINTER TO FUNCTION EXAMPLE N2" << endl
       << endl;
  cout << "Dividing 10 by 5 : ";
  // Division
  double (*divisionPointer)(int, int) = division;    // Declaring a pointer to a function (Has the address of division)
  cout << operation(10, 5, divisionPointer) << endl; // Would also work as operation(10, 20, division);
  // Multiplication
  cout << "Multiplying 10 by 5 : ";
  cout << operation(10, 5, multiply) << endl; // Direct call to the function

  return 0;
}