#include <iostream>
#include <string>

using namespace std;

//! Overloading Functions

//! https://cplusplus.com/doc/tutorial/functions2/

//? Overloaded Functions

// Functions can have the same name but differents parameters or functions types. Normally it is expected that the result or return should be something simillar between the functionn.
// However this is not always the case and C++ does not limit the body of the function you type as long as at least one argument/parameter is different. The type (return) alone of the function is not enough to overload a function.

int checkSize()
{
  string charString;
  cout << "Enter your name : ";
  cin >> charString;
  return charString.size();
}

void checkSize(string wD)
{
  double n1, n2, ans;
  cout << "Write two numbers you would like to know the size of numbers that are in between.";
  cout << "\nEnter the first number : ";
  cin >> n1;
  cout << "Enter the second number : ";
  cin >> n2;
  ans = n1 - n2;

  if (ans < 0)
    ans = ans * -1;

  cout << wD << "\nThe size of the numbers in between the 2 numbers is " << ans << endl
       << endl;
}

//? Function Templates

/* Often when using function overloading the body of the function could be the same. To avoid repetition we can use function templates. The way templates work is to first declare a template using its keyword and then define the parameters
   by using either the class or typename type. Then we can use the parameters we created to create a new type of function that will work within the template. Later we will call the function when we need it for real and the type we put on the call
   will replace the corresponding type in the template. Example:
 */

template <class classType, typename nameType>
classType add(classType a, nameType b) //! We created the template of the function "add" with 2 parameters called classType and nameType
{
  return a + b;
}

//! Templates may also be written with no template types

template <class T, class U>
bool isEqual(T a, U b)
{
  bool value = a == b;
  if (value)
  {
    cout << "They are equal";
    return value;
  }
  else
  {
    cout << "They are not equal";
    return value;
  }
}

//? Non-Type Template Arguments

// Templates may also include non-type arguments, in other words, normal types (int, double, etc).

template <class T, const int N>
T fixedMultiply(T a)
{
  return a * N;
}

int main()
{
  string wD = "\nWell done.";
  cout << "Your name (With spaces included) has a total of " << checkSize() << " total characters." << endl
       << endl;
  checkSize(wD); //! This is the overloaded function

  cout << "TEMPLATES" << endl
       << endl;

  cout << add<int, double>(10, 10.5) << endl; //! When calling the templates whe will change the type of the parameters for int and double (This can be done with any type as long as it makes sense).
  cout << add(25.5, 10) << endl
       << endl; //! Its also possible to call the template without specifying the type of the parameters, but the compiler will guess their type based on the values we put in the call.
  cout << "Are 10 and 10.0 equal?" << endl;
  isEqual(10, 10.0);

  cout << endl
       << "\nNON-TYPE TEMPLATE ARGUMENTS" << endl
       << endl;

  cout << fixedMultiply<int, 5>(10) << endl;
  cout << fixedMultiply<int, 10>(10) << endl; // Is calling two versions of the same functions.

  return 0;
}