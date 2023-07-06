#include <iostream>
using namespace std;

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, … and so on.
int nThFibonacci(int num) {

  int previousFib = 0, currentFib = 1;

  if(num <= 1) {
    return num;
  } 

  for (int i = 0; i < num - 2; i++)
  {
    /* code */
    int newFib = previousFib + currentFib;
    previousFib = currentFib;
    currentFib = newFib;
  }
  

  return currentFib;
}
int main() {

  int solution = nThFibonacci(8);

  cout << solution << endl;

  return 0;
}

//13