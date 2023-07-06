#include <iostream>
using namespace std;

bool isPrime(int num) {

  for (int i = 2; i < num; i++) {

    if(num % i == 0) {
      return false;
      break;
    }
  }

  return true;
}

int main() {

  int solution = isPrime(23);

  if(solution) {
    cout << "given number is prime \n";
  } else {
    cout << "Given number is not prime" << endl;
  }
  return 0;
}