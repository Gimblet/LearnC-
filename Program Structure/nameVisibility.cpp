#include <iostream>

using namespace std;

//! Name Visibility
//! https://cplusplus.com/doc/tutorial/namespaces/

//? Namespaces (Declaration)
// Help manage names of variables or functions without repetition conflicts. This way we can repeat common names such as value, price, etc. All with their respective definitions.
//! To declare namespaces we write 'namespace' then the name of the actual namespace, finally we open a block.
//! Namespaces may be declared in different parts of the program, and may be nested.

namespace baloon
{
  int value = 10;
  double price = 5.5;
  void printValue()
  {
    cout << "Value: " << value << endl;
  }
} // namespace baloon

namespace square
{
  int value = 20;
  double price = 10.5;
  void printValue()
  {
    cout << "Value: " << value << endl;
  }
} // namespace square

namespace baloon
{
  bool namespaceSplitted = true;
} // Splitting a namespace

int main()
{
  //? Scopes
  // Variables, statements, etc have different scopes. There scoop may be local or global. Variables with Local scope are valid within a block ({}), global scope is outside of any block (The whole program/file).
  //! Local variables in an inner-block may hide (Re-Declarate) global variables with the same name. This is called shadowing.

  cout << "--- SCOPES ---" << endl
       << endl;

  int x = 10, y = 20, z = 30; // Global Scope

  {
    int x = 100;                        // Affects Local Scope (Hides x)
    y = 200;                            // Affects Global Scope
    z = y + x;                          // Afects Global Scope
    cout << "x (local): " << x << endl; // 100
  }

  cout << "x (global): " << x << endl; // 10
  cout << "y : " << y << endl;         // 200
  cout << "z : " << z << endl;         // 300

  //? Namespaces (Usage)

  cout << endl
       << "--- NAMESPACES ---" << endl
       << endl;

  //! By identifier
  // To use a namespace by identifier, write the name of the namespace followed of the scope resolution operator (::) and the name of the variable or function.

  cout << baloon::value << endl; // namespace::value
  cout << square::value << endl;

  //! By making use of ↓
  //? Using
  // We use "using" when we have to call a namespace multiple times. This way we can avoid writing the namespace name every time. There is two ways to use it in a namespace

  cout << endl
       << "--- NAMESPACE (USING) ---" << endl
       << endl;

  //* First Way (Call a single variable or function)
  // Price in this context will always refer to the one in baloon namespace. Therefore, we need to specify in case we want to use then one in square namespace.

  using baloon::price;

  cout << price << endl;         // price (baloon)
  cout << square::price << endl; // price (square)

  //* Second Way (Call the entire namespace)
  // The same as the first way, but we can call all the variables and functions in the namespace. In this case we will make it within a block scope.

  {
    using namespace baloon;
    cout << endl
         << value << endl; // value (baloon)
    printValue();          // printValue (baloon)
    cout << price << endl; // price (baloon)
  }

  {
    using namespace square;
    cout << endl
         << value << endl; // value (square)
    printValue();          // printValue (square)
    cout << price << endl; // price (square)
  }

  return 0;
}