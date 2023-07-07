#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;

  char ch = 'A';
  while (row <= n)
  {
    int col = 1;

    while (col <= n)
    {
      cout << ch << " ";
      // ch++;
      col++;
    }

    cout << endl;
    row++;
  }
}