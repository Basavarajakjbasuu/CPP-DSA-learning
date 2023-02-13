#include <iostream>
using namespace std;

int main()
{
  // Arithmetic operator +-/*
  int a = 5 / 4;
  cout << a << endl; // int/int = int
  a = 5.20 / 5;
  cout << a << endl;

  float b = 5.0 / 4;
  cout << b << endl; // float/int = float
  b = 5.20 / 5;
  cout << b << endl;

  // Relational Operator
  /*
    == => equal
    != => not Equal
    >= less than equal
    <= grater than equal
    > grater
  */

  int i = 4;
  int j = 6;

  bool result = i == j;
  cout << result << endl; // 0 - false

  // Logical operator
  /*
    && and
    || or
    ! Not
  */

  cout << !result << endl; // 1 - true
}

// OUTPUT:
/*
1
1
1.25
1.04
*/