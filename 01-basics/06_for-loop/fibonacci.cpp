#include <iostream>
using namespace std;

// fibonacci series from 0 to n
int main() {

  int a = 0, b = 1;
  int n = 0;

  cin >> n;

  cout << a << " " << b << " ";
  for (int i = 1; i <= n-2; i++) {
    int nextNumer = a + b;
    cout << nextNumer << " ";
    a = b;
    b = nextNumer;
  }
}
/*
  10
  0 1 1 2 3 5 8 13 21 34
*/