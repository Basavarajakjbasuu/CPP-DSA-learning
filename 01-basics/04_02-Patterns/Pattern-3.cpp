#include <iostream>

using namespace std;

int main()
{
  int n, i = 1;
  cin >> n;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << j << " "; // printing j value
      j++;
    }
    cout << endl;
    i++;
  }
}

/*
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
*/