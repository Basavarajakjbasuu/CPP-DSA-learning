
#include <iostream> 
using namespace std;

int main() {

  // declare
  int number[3] = {10, 20, 30};

  // accessing
  cout << "value at 0 index: " << number[0] << endl;
  cout << "value at 1 index: " << number[1] << endl;
  cout << "value at 2 index: " << number[2] << endl;

  /*
    value at 0 index: 10
    value at 1 index: 20
    value at 2 index: 30
  */

  //PRINTING THE ARRAY

  int n = 3;
  for (int i = 0; i < n; i++) {
    cout << "value at " << i <<" index: " << number[i] << endl; 
  }

  /*
    value at 0 index: 10
    value at 1 index: 20
    value at 2 index: 30
  */

  //initialising with zero
  int arr1[10] = {0};
  int n1 = 10;
  for (int i = 0; i < n1; i++) {
    cout << arr1[i] << " "; 
  }
  //0 0 0 0 0 0 0 0 0 0
  return 0;
}


/*
  #include <iostream> 
  using namespace std;

  int main() {

    
    return 0;
  }
*/