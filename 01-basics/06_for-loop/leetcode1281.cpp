#include <iostream>
using namespace std;

int main() {

  /*
    Given an integer number n, return the difference between the product of its digits and the sum of its digits.


    Input: n = 234
    Output: 15 
    Explanation: 
    Product of digits = 2 * 3 * 4 = 24 
    Sum of digits = 2 + 3 + 4 = 9 
    Result = 24 - 9 = 15
  */

  int product = 1, sum = 0, n = 0;

  cin >> n;

  while( n!= 0) {
    int rem = n % 10;
    sum += rem;
    product *= rem;
    n = n / 10;
  }

  int result = product - sum;

  cout << result << endl;

  return 0;

  // 234
  // 15
}