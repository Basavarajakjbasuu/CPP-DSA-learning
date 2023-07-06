#include <iostream>
using namespace std;

// n is prime number or not
int main() {

  int n = 0;

  cin >> n;

  //corner case
  if(n <= 1) {
    cout << "Negative number is not prime";
  }

  for (int i = 2; i < n; i++) {
    //rem = 0, Not a Prime
    if (n % i == 0) {
      cout << "not prime" << endl;
      cout << n << " is divisible by " << i << endl;
      break;
    } else {
      cout << "prime" << endl;
      break;
    }
  }

  return 0;
}

/*
  19
  prime
*/