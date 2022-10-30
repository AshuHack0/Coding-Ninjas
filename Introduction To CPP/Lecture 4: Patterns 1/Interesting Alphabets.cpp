/*Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
*/
 #include <iostream>
using namespace std;
int main ()
{
     int n; 
    cin >> n; 
    int temp = 'A'+n-1;
    for (int i=0; n>i;i++)
    {
         temp='A'+n-i-1;
        for (int j=0; i>=j;j++)
        {
           char a=temp;
            cout << a;
            temp++; 
        }
       cout << endl;
    }
}
