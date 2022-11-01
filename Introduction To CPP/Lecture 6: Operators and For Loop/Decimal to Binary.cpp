/*
Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[100];
  int i = 0;
  int count = 0;
  if(n==0)
  {
        cout << "0"; 
  }
  while (n > 0) {
    if (n % 2 == 0) {
      n = n / 2;
      arr[i] = 0;
      i++;
      count++;
    } else {
      arr[i] = 1;
      n = n / 2;
      i++;
      count++;
    }
  }
  int ans = 0;
  for (int i = 0; count > i; i++) {
    cout << arr[count - i - 1];
  }

  return 0;
}
