#include <iostream>
using namespace std;

int main()
{
  int a = -123;
  cout << a << endl;
  cout << "size of a: " << sizeof(a) << endl; // 4
  unsigned int i = -5;
  cout << i << endl;

  char ch = 'c';
  cout << ch << endl;
  cout << "size of ch: " << sizeof(ch) << endl; // 1

  bool bl = true;
  cout << bl << endl;
  cout << "size of bl: " << sizeof(bl) << endl; // 1

  float f = 1.222;
  cout << f << endl;
  cout << "size of f: " << sizeof(f) << endl; // 4

  double db = 1.456666;
  cout << db << endl;
  cout << "size of db: " << sizeof(db) << endl; // 8
}

// OUTPUT:

/*
-123
size of a: 4
c
size of ch: 1
1
size of bl: 1
1.222
size of f: 4
1.45667
size of db: 8

*/