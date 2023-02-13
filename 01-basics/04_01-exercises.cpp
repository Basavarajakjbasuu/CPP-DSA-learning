#include <iostream>
using namespace std;

int main()
{
  //? Question -1

  int a = 9;
  if (a == 9)
  {
    cout << "NINE\n";
  }

  if (a > 0)
  {
    cout << "Positive\n";
  }
  else
  {
    cout << "Negative\n";
  }

  /*
    NINE
    Positive
  */
  //--------------------------------------------------

  //? Question - 2

  int a = 2;
  int b = a + 1;

  if ((a = 3) == b)
  {
    cout << a << endl;
  }
  else
  {
    cout << a + 1 << endl;
  }

  // 3
  //--------------------------------------------------

  //? Question - 3
  int a = 24;
  if (a > 20)
  {
    cout << "Love\n";
  }
  else if (a == 24)
  {
    cout << "Lovely\n";
  }
  else
  {
    cout << "Bassu";
  }
  cout << a << endl;

  // Love
  // 24

  // 65 90 47 -57
  // --------------------------------------------------

  // !HomeWork

  char ch;
  cout << "enter single char: ";
  cin >> ch;
  // ch = cin.get();

  if (ch >= 97 && ch <= 122)
  {
    cout << ch << " is lowercase.\n";
  }
  else if (ch >= 65 && ch <= 90)
  {
    cout << ch << " is uppercase. \n";
  }
  else if (ch >= 47 && ch <= 57)
  {
    cout << ch << " is numeric. \n";
  }
  else
  {
    cout << ch << " is special character.\n";
  }

  /*----------------------------------
     WHILE LOOP
  -----------------------------------*/
  // ? find sum of all even numbers

  int sum = 0, iterator = 1, nthTerm = 0;

  cin >> nthTerm;

  while (iterator <= nthTerm)
  {
    if (iterator % 2)
    {
      cout << iterator << " ";
      sum += iterator;
    }
    iterator += 1;
  }
  cout << endl;

  cout << "Sum of all even numbers: " << sum << endl;

  /*
    OUTPUT

    20
    1 3 5 7 9 11 13 15 17 19
    Sum of all even numbers: 100
  */

  //  ? Prime or not

  int number;
  cin >> number;

  // we won't consider first and last number
  // Because prime number divide 1 or itself soo
  /*
    7
    1,2,3,4,5,6
    will loop on remaining terms
  */
  int i = 2;
  while (i < number)
  {
    if (number % i == 0)
    {
      cout << " Not Prime!" << endl;
      break;
    }
    else
    {
      cout << " its Prime:)" << endl;
      break;
    }

    i += 1;
  }
}