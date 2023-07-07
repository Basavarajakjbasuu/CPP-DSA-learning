#include <iostream>
#include <math.h>
using namespace std;

int main() {
  /*
    Decimal to Binary conversion
  */

  int n, i = 0;
  cin >> n;

  int num = n;

  int ans = 0;

  while(n != 0) {
    // MSB
    int digit = n & 1;
    ans = (digit * pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }

  cout << "Binary representation of " << num << " is " << ans << endl;
}