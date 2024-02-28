#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int userResponse, variableN = 2, c;
bool state = true;
string holder, goAgain = "n";

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
      cout << "\nThe result is : " << rest() << endl;
    }
    else if (userResponse == 3)
    {
      state = true;
      cout << "MULTIPLY selected" << endl;
      initNVariable();
      cout << "\nThe result is : " << multiply() << endl;
    }
    else if (userResponse == 4)
    {
      state = true;
      cout << "DIVISION selected" << endl;
      cout << "\nThe result is : " << division() << endl;
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
  {
    c = 0;
    goto newOperation;
  }
  else
    cout << "Invalid/n response. Now exiting... Thank you for using the program.";
}

inline void greetings()
{
  cout << "Welcome to the command line interface (cli) basic calculator ;)" << endl;
  cout << "This calculator has limitations by today, so the only the crucial operations are functional." << endl
       << endl;
  cout << "Please write a number that matches the calculation you wish to do." << endl
       << endl;
}

// Validates that the number entered by the user is within 1 to 5
inline bool Nvalidation(const int &x)
{
  if (userResponse == 4) // If user selected Divison
    return false;
  int range[5]{1, 2, 3, 4, 5};
  for (int i = 0; i < range[i]; i++)
  {
    if (x == range[i])
      return false;
    else if (i >= 6)
      return true;
  }
}

inline void initNVariable()
{
invalidVariableN:
  cout << "How many numbers are going to be envolved in the operation? (default: 2/ max: 5)" << endl
       << endl;
  cout << "Type your answer: ";
  getline(cin, holder);
  stringstream(holder) >> variableN;
  cout << endl;
  if (Nvalidation(variableN))
  {
    cout << "Please stay within the given margin" << endl
         << endl;
    goto invalidVariableN;
  }
}

double sum()
{
  string numbers[5] = {"first", "second", "third", "fourth", "fifth"};
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
  string numbers[5] = {"first", "second", "third", "fourth", "fifth"};
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
    result -= array[i];
  }
  return result;
}

double multiply()
{
  string numbers[5] = {"first", "second", "third", "fourth", "fifth"};
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
    result *= array[i];
  }
  return result;
}

double division()
{
  string numbers[2] = {"dividen", "quotient"};
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
    result /= array[i];
  }
  return result;
}