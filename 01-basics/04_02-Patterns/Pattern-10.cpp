#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cin >> n;

  while (row <= n)
  {

    int col = 1, value = row;

    while (col <= row)
    {
      cout << value << " ";
      col++;
      value++;
    }
    cout << endl;
    row++;
  }
}

// starting from row count and iterate
/*
  1
  2 3
  3 4 5
  4 5 6 7
*/