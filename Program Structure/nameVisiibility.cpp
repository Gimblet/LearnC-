#include <iostream>

using namespace std;

//! Name Visibility
//! https://cplusplus.com/doc/tutorial/namespaces/

//? Namespaces (Declaration)

// To declare namespaces

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

  return 0;
}