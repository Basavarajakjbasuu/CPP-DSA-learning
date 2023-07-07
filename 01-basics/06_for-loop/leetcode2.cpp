#include <iostream>
using namespace std;

int main() {
  /*
    191. Number of 1 Bits

    Input: n = 00000000000000000000000000001011
    Output: 3
    Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
  */

  int count = 0, n = 0;

  cin >> n;

  while( n != 0) {

    if(n&1) {
      count++;
    }

    n = n >> 1;
  }

  cout << count << endl;
}