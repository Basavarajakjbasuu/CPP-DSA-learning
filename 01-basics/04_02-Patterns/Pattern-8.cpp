#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;

  cin >> n;

  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << col << " ";
      col++;
    }
    cout << endl;
    row++;
  }
}

/*
  1
  1 2
  1 2 3
  1 2 3 4
*/