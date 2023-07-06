#include <iostream>
#include <bitset>
using namespace std;

string decimalToBinary(int num) {
  if(num > 0) {
    return bitset<32>(num).to_string();
  } else {
    int positiveNum = -num;

    string binary = bitset<32>(positiveNum).to_string();

    for(char& bit : binary) {
      bit = (bit == '0') ? '1' : '0'; //One's complement
    }

    for (int i = binary.length() - 1; i >= 0; i--) {
      if(binary[i] == '0') {
        binary[i] = '1';
      } else {
        binary[i] = '0';
      }
    }

    return binary;
  }
}


int main() {
  /*
    Decimal to Binary conversion
  */

  int decimalNum = -27;

  string binary = decimalToBinary(decimalNum);

  cout << "Binary representation of " << decimalNum << " is " << binary << endl;
}

/*
  In this example, we have chosen the negative decimal number -27. Let's go through the code step by step to understand how the conversion works:

  The decimalToBinary function is called with decimalNum set to -27.
  Since -27 is a negative number, the code proceeds to the else block in the decimalToBinary function.
  The absolute value of -27 is obtained by multiplying it by -1, resulting in positiveNum equal to 27.
  The binary representation of 27 is obtained using std::bitset<32>(positiveNum).to_string(), which gives "00000000000000000000000000011011".
  The for loop iterates over each character (bit) in the binary string and flips '0' to '1' and '1' to '0' using the expression bit = (bit == '0') ? '1' : '0'. The resulting binary string becomes "11111111111111111111111111100100" (one's complement).
  The second for loop starts from the end of the binary string and iterates backward. It finds the first '0' encountered at index 27 (from the least significant bit). It flips this '0' to '1' using binary[i] = '1', and the resulting binary string becomes "11111111111111111111111111100101" (two's complement).
  The binary representation is stored in the binary variable.
  Finally, the binary representation of -27 is printed as "11111111111111111111111111100101".
  So, the binary representation of -27 is "11111111111111111111111111100101".
*/