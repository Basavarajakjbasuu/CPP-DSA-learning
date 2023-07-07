#include <iostream>
using namespace std;

int main()
{
  int a = 0;
  // cout << "Enter number: ";
  // cin >> a;

  // a = cin.get();
  // cout << "Value of a " << a << endl;

  // !IF STATEMENT

  if (a > 0)
  {
    cout << a << " is Positive." << endl;
  }
  else
  {
    cout << a << " is Negative." << endl;
  }
  // Enter number: -5
  // -5 is Negative.

  // -----------------------------------------------

  // !While Loop
  //? print numbers

  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    cout << i << " ";
    i++;
  }
  cout << endl;

  // 7
  // 1 2 3 4 5 6 7

  //? sum of numbers

  int sum = 0;
  int x = 1;

  while (x <= n)
  {
    sum += x;
    x += 1;
  }
  cout << sum << endl;
  // 7
  // 28
}