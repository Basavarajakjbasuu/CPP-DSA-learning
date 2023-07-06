#include <iostream> 
using namespace std;

//print the array
void printArray(char arr[], int size) {

  cout << "Printing the Array." << endl;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {

  int data[5] = {-1, -2, -3, -4, -5};

  // printArray(data, 5);
  /*
    Printing the Array.
    -1 -2 -3 -4 -5
  */

  //? TYPES OF ARRAYS

  char ch[5] = { 'a', 'b', 'c', 'r', 'f'};
  printArray(ch, 5); //a b c r f
  double nums[3] = {2.455, 45.678, 56.000};
  bool isArray[2] = { true, false};
  float digits[3] = {2.3, 3.4, 5.6};

  return 0;
}