#include <iostream>
using namespace std;

int factorial(int n) {

  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

int nPr(int n, int r) {

  int numerator = factorial(n);

  int denominator = factorial(n - r);

  return numerator / denominator;
}

int main() {

  int solution = nPr(8, 8);

  cout << "nPr: " << solution << endl;

  return 0;
}