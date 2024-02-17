#include <iostream>
#include <string>

using namespace std;

//! Statements and Flow control
//! https://cplusplus.com/doc/tutorial/control/

int main()
{
  //! Statements
  //? For Practical purposes we will not cover the most common statements

  //! If Statement (Skipped)
  //! Switch Statement (Skipped)
  //! While and Do While Loops (Skipped)

  //? For Loop

  // The for loop is used to repeat a block of code a known number of times
  // Its parts are initialized, condition, and increment

  for (int i = 0; i < 3; i++)
  {
    cout << i << ", ";
  } // Will output 0, 1, 2,

  //! For loops may have more than one variable initialized, increment or condition. These are allways separated by commas.

  for (int i = 0, j = 0; i < 3; i++, j++)
  {
    cout << i << ", " << j << endl;
  } // Will output 0, 0 1, 1 2, 2

  //! Its possible to have no initialization, condition or increment at all, but the semicolons are mandatory

  int i = 0;
  for (; i < 3;)
  {
    cout << i << ", ";
    i++;
  } // Will output 0, 1, 2,1

  cout << endl << endl;

  //! We should be careful with leaving the condition in blank, as this results in an infinite loop

  //? Range Based For Loop (Also called for each loop)

  // This is another way to write a for loop, it is used to iterate through the elements of an array or other sequence. In this case we will use the caracteres of a string as a sequence.
  // This kind of loop will go trough all the elements of the sequence, and will not stop until it reaches the end of the sequence.

  for (char c : "Hello")
  {
    cout << c << ", \n";
  } // Will output H, e, l, l, o,

  //! In the example abouve we used the char type, but range for loops are often used with the auto type.

  //? Jump Statements

  //? Break Statement
  // Break statements are used within for or while loops to stop the loop before it has finished.

  int x = 20;

  while (x > 10)
  {
    cout << x << endl;
    x++;
    break;
  }

  // The while above would be a infinite loop if it wasnt for the break statement

  //? Continue Statement
  // The continue statement skips the rest of the following iteration within our loop, making the loop to continue with the next iteration but without leaving the loop structure.

  for (int a = 0; a < 5; a++)
  {
    if (a == 3)
    {
      continue;
    }
    cout << a << ",";
  } // Will output 0, 1, 2, 4, (Skipping the output of 3)

  cout << endl
       << endl;

  //? Goto Statement
  // Used to jump to a specific part of the code. We first make a reference and then call it with the goto statement.

  string name = "Default";

knowTheName: //! This is the reference

  cout << "Is your name " << name << "?" << endl;
  if (name == "Default")
  {
    cout << "If not, i bet i will know your name in a moment" << endl;
    cout << "Please enter your name: ";
    getline(cin, name);
    goto knowTheName; //! This is the call
  }
}