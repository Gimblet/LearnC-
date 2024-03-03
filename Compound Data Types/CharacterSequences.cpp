#include <iostream>
#include <string>

using namespace std;

int main()
{
  //! Character Sequences
  //! https://cplusplus.com/doc/tutorial/ntcs/

  // Char are basically arrays that end with a null character '\0'. Nowadays this is not used, since we have the string class, but that doesn't mean that is not in a string. In fact, it still is, but is hidden from the user.
  // Therefore the following two lines are equivalent (They both have the same length of 6 char)

  char character[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // The null character is added manually and it means end of string
  char directlyIntialize[] = "Hello";                 // When using the doble quotes the null character is added automatically (\0)
  string characterMadeString = "Hello";

  //! Once an array of characters has been initialized it cannot be assigned a new value (Same as with arrays) but we can change the value of each element of the array.

  // char name[] = "Diego";
  // name[] = "Luis"; //This is not possible

  /*
    name[0] = 'L';
    name[1] = 'u';
    name[2] = 'i';
    name[3] = 's';
    name[4] = '\0';

    This is possible
  */

  //* Most functions in cpp are overloaded to work with both strings and character arrays (Also know as C-String), but we must be carefull with the null character, since it is not going to be added automatically when using the character array.
  // We can covert a string into a c-String and viceversa by using the c_str() method of the string class and the string constructor.

  string newString = character; // C string into string
  characterMadeString.c_str();  // String into C string

  return 0;
}