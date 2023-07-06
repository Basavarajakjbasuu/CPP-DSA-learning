#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  bool isPrime = true;
  if( n <= 1 ) {
    cout << "Not a prime";
  } else {
    for (int i = 2; i < n; i++) {
      if(n % i == 0) {
        isPrime = false;
        cout << " Not a prime" << endl;

        cout << n << " is divisible by " << i << endl;
        break;
      }
    }
  }

  if(isPrime) {
    cout << "Prime Number" << endl;
  }

  return 0;
}