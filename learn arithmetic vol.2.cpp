#include<iostream>
using namespace std;

void add() {
  float x;
  cout << "Enter first number: ";
  cin >> x;

  float y;
  cout << "Enter second number: ";
  cin >> y;

  float addition;
  cout << "What is addition result? ";
  cin >> addition;

  float prog_add = x+y;
  if (prog_add == addition)
  {
    cout << "Good job!"<<endl;
  }
  else
  {
    cout << "Wrong answer"<<endl;
  }
}

void subtract() {
  float x;
  cout << "Enter first number: ";
  cin >> x;

  float y;
  cout << "Enter second number: ";
  cin >> y;

  float subtraction;
  cout << "What is subtraction result? ";
  cin >> subtraction;

  float prog_subtract = x-y;
  if (prog_subtract == subtraction)
  {
    cout << "Good job!"<<endl;
  }
  else
  {
    cout << "Wrong answer"<<endl;
  }
}

void multiply() {
  float x;
  cout << "Enter first number: ";
  cin >> x;

  float y;
  cout << "Enter second number: ";
  cin >> y;

  float multiplication;
  cout << "What is multiplication result? ";
  cin >> multiplication;

  float prog_multiply = x*y;
  if (prog_multiply == multiplication)
  {
    cout << "Good job!"<<endl;
  }
  else
  {
    cout << "Wrong answer"<<endl;
  }
}

void divide() {
  float x;
  cout << "Enter first number: ";
  cin >> x;

  float y;
  cout << "Enter second number: ";
  cin >> y;

  float division;
  cout << "What is division result? ";
  cin >> division;

  float prog_divide = x/y;
  if (prog_divide == division)
  {
    cout << "Good job!"<<endl;
  }
  else
  {
    cout << "Wrong answer"<<endl;
  }
}

void loop(string operation){
  if (operation == "Add")
  {
    add();
  }
  if (operation == "Subtract")
  {
    subtract();
  }
  if (operation == "Multiply")
  {
    multiply();
  }
  if (operation == "Divide")
  {
    divide();
  }
}

int main() {

    string operation;
    cout << "Enter operation: " <<endl;
    cin >> operation;
    while (operation != "Quit")
    {
      loop(operation);
      cout << "Enter operation: " <<endl;
      cin >> operation;
    }
  return 0;
}