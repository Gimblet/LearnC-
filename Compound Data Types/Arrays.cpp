#include <iostream>
#include <string>
#include <array>

using namespace std;

int sum(int[], int); // Could also be declared as int sum(int*, int) since is a pointer

//! Arrays
//! https://cplusplus.com/doc/tutorial/arrays/

// Series of elements of the same type.
//* Declaration TYPE NAME[SIZE] = {ELEMENTS} (The equal sign is not required, nor the elements or the size)

int main()
{
  cout << "ARRAYS:" << endl
       << endl;
  //? Declaring an array
  string students[4]{"Diego", "Luis", "Camila"}; // 1 valuable is not initialized

  //? Accessing values of an array
  for (int i = 0; i < 4; i++)
  {
    cout << students[i] << endl; // Prints the 4 elements of student's array
  }

  string bestStudent = students[0]; // Diego
  string newStudent = "Mayra";
  students[3] = newStudent; // Replaces the 4th element of the array with the newStudent value

  cout << "New Student: " << students[3] << endl
       << endl;
  ; // Mayra

  //? Arrays are flexible
  // A weird operation example that works
  int foo[10] = {9, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int a = 0;
  foo[foo[a]] = foo[2] + 5; // Changes the value of foo[2] (30)
  cout << foo[9] << endl
       << endl; // 35

  //? Multidimensional arrays
  // These are so called arrays of arrays, but are also called matrices or tables. These are declared as follows:

  int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  /*
    Would be read by a human as:
    [1 2 3]
    [4 5 6]
    [7 8 9]
  */

  // To instanciate a multidimensial array we do rows x columns, so in case we want to pull out the number 6 we would do:
  cout << "MULTIDIMENSIONAL ARRAY:" << endl;
  cout << matrix[1][2] << endl; // 6

  //* We must be carefull with multidimensional arrays, since as each layer we add, there is a significant amount of memory that is going to be increased.
  //! Going trough a multidimensinal array

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << matrix[i][j] << " ";
    }
  }

  cout << endl;

  //? Arrays as parameters
  // Given to the natural behavior of arrays, we cannot directly copy them, however we can pass it as an address. This operations is much more efficient.
  //* In the function we want to use, we need to declare an array as argument with their respective type that is going to match the real array. We shall not set the size of the array, since it is not necessary. (Unless is a matrix array)

  int arrayArg[] = {1, 2, 3, 4, 5};
  cout << "\nARRAYS AS PARAMETERS:" << endl;
  cout << sum(arrayArg, 5) << endl
       << endl;

  //? Librery <array>
  // The library array is briefly explained in the documentation, so we will make the same in here. It is a library that must be defined and it gives us certain keywords like array, .size(), among others.
  //! For more info in this library check https://cplusplus.com/reference/array/

  cout << "LIBRARY <array>:" << endl
       << endl;

  array<int, 3> libArray = {10, 20, 30};
  for (int i = 0; i < libArray.size(); i++)
  {
    cout << libArray[i] << endl;
  }

  return 0;
}

int sum(int arrayArg[], int size)
{
  int result = 0;
  for (int i = 0; i < size; i++)
  {
    result += arrayArg[i];
  }
  return result;
}
