
/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; n >= i; i++) {
    // for spaces
    for (int j = n - 1 - i; 0 <= j; j--) {
      cout << " ";
    }
    for (int k = i; k > 0; k--) {
      cout << k;
    }
    for (int k = 2; i >= k; k++) {
      cout << k;
    }

    cout << endl;
  }
}
