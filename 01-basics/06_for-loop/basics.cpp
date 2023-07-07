#include <iostream>
using namespace std;

// SUM of natural numbers
int main() {

  int n = 0, sum = 0;
  cin >> n;

  for (int i = 1; i < n; i++ ) {
    cout << "i " << i << endl;
    sum += i;
  }

  cout << "SUM: " << sum << endl;
  return 0;
}
/*
  n-> 10
  SUM: 45
*/