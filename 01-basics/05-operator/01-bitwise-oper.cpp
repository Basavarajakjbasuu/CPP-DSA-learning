#include<iostream>
using namespace std;

int main() {

  int a = 4, b = 6;

  cout << " A&B " << (a&b) <<endl;
  cout << " A|B " << (a|b) <<endl;
  cout << " A~B " << ~a <<endl;
  cout << " A^B " << (a^b) <<endl;

  cout << (16 << 2) << endl;
  cout << (16 >> 2);
  
  return 0;
}