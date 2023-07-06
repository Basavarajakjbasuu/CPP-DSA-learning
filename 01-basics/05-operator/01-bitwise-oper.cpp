#include<iostream>
using namespace std;

int main() {

  int a = 4, b = 6, c = 8;

  cout << " A&B " << (a&b) <<endl;
  cout << " A|B " << (a|b) <<endl;
  cout << " ~c " << ~c <<endl;
  cout << " A^B XOR " << (a^b) <<endl;

  cout << (16 << 2) << endl;
  cout << (5 << 3) << endl;
  cout << (16 >> 2);
  
  return 0;
}