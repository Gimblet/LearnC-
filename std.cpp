//!Structure of a program https://cplusplus.com/doc/tutorial/program_structure/

/*
  Block Comments are declared this way (Pretty standard to be honest)
*/

// Single line comments are declared this way (Also pretty standard)

#include <iostream>  //Standard library of the C++ Language
using namespace std; // By writting this statement we get rid of the std (standard) at the moment of writing std:cout and we have given visibility of to the following uses of std // Is called a declaration

int main()
{
  std::cout << "Hello World "; // cout = character output
  cout << "Mayra ";            // This one also works because the std has been called from the name space (Line 8)
  cout << "Programa Rapido";  // The "<<" is kinda a equal sign, it as the cout means character output, the << means that the following count "Programa Rapido", will be inserted into that character output (The << is called insertion operator)
}