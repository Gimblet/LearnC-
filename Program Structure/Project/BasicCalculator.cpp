#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int userResponse, variableN = 2, c;
bool state = true;
string holder, goAgain = "n";
string numbers[5] = {"first", "second", "third", "fourth", "fifth"};

void greetings();
void initNVariable();

double sum();
int rest();
double multiply();
double division();

namespace solutions
{
  inline void options()
  {
    cout << "1. Sum" << endl;
    cout << "2. Rest" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Division" << endl
         << endl;
    cout << "Write one of the above (Number): ";
    getline(cin, holder);
    stringstream(holder) >> userResponse;
    cout << endl;
  }
}

namespace scenarios
{
  inline void options()
  {
    if (userResponse == 1)
    {
      state = true;
      cout << "SUM selected" << endl;
      initNVariable();
      cout << "\nThe result is : " << sum() << endl;
    }
    else if (userResponse == 2)
    {
      state = true;
      cout << "REST selected" << endl;
      initNVariable();
      rest();
    }
    else if (userResponse == 3)
    {
      state = true;
      cout << "MULTIPLY selected" << endl;
      initNVariable();
      multiply();
    }
    else if (userResponse == 4)
    {
      state = true;
      cout << "DIVISION selected" << endl;
      initNVariable();
      division();
    }
    else
    {
      state = false;
      c++;
    }
  }
}

int main()
{
  greetings();
newOperation:
  do
  {
    if (c != 0)
      cout << "Invalid User Input, Try again." << endl
           << endl;
    solutions::options();
    scenarios::options();

  } while (state == false);
  cout << "\nNew Operation? (y/n): ";
  getline(cin, goAgain);
  cout << endl;
  if (goAgain == "y" || goAgain == "Y")
    goto newOperation;
  else
    cout << "Invalid/n response. Now exiting... Thank you for using the program!";
}

inline void greetings()
{
  cout << "Welcome to the command line interface (cli) basic calculator ;)" << endl;
  cout << "This calculator has limitations by today, so the only the crucial operations are functional." << endl
       << endl;
  cout << "Please write a number that matches the calculation you wish to do." << endl
       << endl;
}

inline void initNVariable()
{
  cout << "How many numbers are going to be envolved in the operation? (default: 2/ max: 5)" << endl
       << endl;
  cout << "Type your answer: ";
  getline(cin, holder);
  stringstream(holder) >> variableN;
  cout << endl;
}

double sum()
{
  double array[variableN];

  for (int i = 0; i < variableN; i++)
  {
    double userInput = 0.0;
    cout << "Type the " << numbers[i] << " number : ";
    getline(cin, holder);
    stringstream(holder) >> userInput;
    array[i] = userInput;
  }

  double result = array[0];

  for (int i = 1; i < variableN; i++)
  {
    result += array[i];
  }
  return result;
}

int rest()
{
  return 0;
}

double multiply()
{
  return 0;
}

double division()
{
  return 0;
}