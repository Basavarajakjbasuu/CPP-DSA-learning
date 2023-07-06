#include <iostream>
using namespace std;

int main() {

  int a = 1, b = 2;

  if(a-- > 0 && ++b > 2) { // a = 1 b = 3
    cout << "St1" << endl;
  } else {
    cout << "St2";
  }

  cout << a << " " << b << endl;

  // st1 
  // 0 3

  int number = 3;
  cout << (25 * (++number)); //100
}