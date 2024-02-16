#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define PI 3.14169
#define rectangleArea(l, w) (l * w)

int main()
{
  const int square = 4;
  auto choice = 0;
  double PIVerification;
  int password, age;
  string name, email;
  string tempString;

  cout << "Welcome to the Account Creator Simulator" << endl;
  cout << "Which account would you like to create?" << endl;
  cout << "1. Personal Account" << endl;
  cout << "2. Business Account" << endl;
  cout << "3. Continue as Guest" << endl;

  getline(cin, tempString);
  stringstream(tempString) >> choice;

  if (choice == 3)
  {
    cout << "Guest Pass is not yet supported" << endl;
    return 0;
  }
  else
  {
    cout << "Please enter your name: ";
    getline(cin, tempString);
    cout << "Hello " << tempString << "!" << endl;
    name = tempString;

    cout << "Please enter your email: ";
    getline(cin, tempString);
    email = tempString;

    cout << "Please enter your age: ";
    getline(cin, tempString);
    stringstream(tempString) >> age;

    cout << "Please enter your password (Numbers Only): ";
    getline(cin, tempString);
    stringstream(tempString) >> password;
  }

  cout << "\nStep 1/2 completed" << endl;

  if (choice == 1)
  {
    cout << "Personal Account Created" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Age: " << age << endl;
    cout << "Password: " << password << endl
         << endl;
  }

  else if (choice == 2)
  {
    string businessName;
    cout << "Please enter your business name: ";
    getline(cin, tempString);
    businessName = tempString;

    cout << "\nBusiness Account Created" << endl;
    cout << "Name: " << name << endl;
    cout << "Business Name: " << businessName << endl;
    cout << "Email: " << email << endl;
    cout << "Age: " << age << endl;
    cout << "Password: " << password << endl
         << endl;
  }

  cout << "Now that we have your information, you need to pass a human verification test" << endl;
  cout << "What are the PI first 6 digits? (Dot included)" << endl;
  cout << "Answer: ";
  getline(cin, tempString);
  stringstream(tempString) >> PIVerification;

  if (PIVerification != PI)
  {
    cout << "Verification Failed" << endl;

    cout << "Please try again" << endl
         << endl;

    cout << "If given a rectangle with a length of 5 and a width of 4, what is the area?" << endl;
    cout << "Answer: ";
    getline(cin, tempString);
    stringstream(tempString) >> choice;

    if (choice != rectangleArea(5, square))
    {
      cout << "Verification Failed, Try Again Later" << endl;
    }

    else
    {
      cout << "Verification Passed Succesfully" << endl;
    }
  }

  else
  {
    cout << "Verification Passed Succesfully" << endl;
  }
}