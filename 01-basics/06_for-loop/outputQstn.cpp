#include <iostream>
using namespace std;

int main() {

  // for (int i = 0; i <= 15; i +=2) {
  //   cout << i << endl;

  //   if(i&1) {
  //     continue;
  //   }
    
  //   i++;
  // }

  for (int i = 0; i <= 5; i++) {
    cout << i << endl;
    i++;
  }

  // 0 2 4

  for (int i = 0; i < 5; i++) {
    for (int j = i; j <= 5; j++) {
      if(i+j == 10) {
        break;
      }

      cout << i << " " << j << endl;
    }
  }
    return 0;
}

/*
  0
  3
  5
  7
  9
  11
  13
  15
*/