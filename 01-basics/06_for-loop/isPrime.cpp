#include <iostream>
using namespace std;

// n is prime number or not
int main() {

  int n = 0;

  cin >> n;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "not prime";
      break;
    } else {
      cout << "prime";
      break;
    }
  }

  return 0;
}

/*
  19
  prime
*/