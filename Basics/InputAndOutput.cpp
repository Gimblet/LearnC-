#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//! https://cplusplus.com/doc/tutorial/basic_io/

int main()
{
  /*
    The following are ways to get input from the user
    ? cin = Standard input stream
    ? getline(cin, VARNAME) = Gets a line from the user and stores it in VARNAME //!Recommended for strings
    ? stringstream(VARNAME) = Converts the string VARNAME into a number //!Recommended for numbers
  */

  //! cin

  cout << "CIN" << endl;

  string x;
  cout << "Please enter your full name: " << endl;
  cin >> x;
  cout << "Cin can only take your first name, which is " << x << endl
       << endl;

  // Notice that cin uses 2 greater than signs (>>) is called the extration operator while the less than sign (<) is called the insertion operator
  // One big flaw with using cin as it is is that it will only get the first word of the input, so if you input "Hello World" it will only get "Hello" because it takes TAB characters, spaces and newlines as delimiters
  // To fix this we can use the getline() function

  //! getline(cin, VARNAME)

  cout << "GETLINE()" << endl;

  string y;
  getline(cin, y);
  cout << "getline() will take your Last name, which is" << y << endl
       << endl;

  // On normal cirsunstances, getline() will take the whole line, but if we use it after cin, it will take the rest of the line that cin did not take, therefore in future programs we should always try to use getline() instead of cin

  //! stringstream(VARNAME)

  cout << "STRINGSTREAM()" << endl;

  //? Variables

  string mystr;
  float price = 0;
  int quantity = 0;

  cout << "Please enter the price: ";
  getline(cin, mystr);
  stringstream(mystr) >> price;

  cout << "Please enter the quantity: ";
  getline(cin, mystr);
  stringstream(mystr) >> quantity;

  cout << "Total price: " << price * quantity << endl;

  // Stringstream takes a string and converts it into a number, in this case we are passing the value to the price and quantity variables to be stored there so we can later use them to calculate the total price
}