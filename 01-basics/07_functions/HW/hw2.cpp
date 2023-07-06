#include <iostream>
using namespace std;

unsigned int setBitsCount(unsigned int num) {

  unsigned int count = 0;

  while(num) {
    count += num & 1; //msb

    num >>= 1;
  }

  return count;
}

int main() {

  int i = 7 & 7;
  cout << i << endl;

  int result = setBitsCount(i);

  cout << result << endl;

  return 0;
}

//7
//3