/*
Print the following pattern for the given N number of rows.
Pattern for N = 4




The dots represent spaces.


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
      1 
    12
  123
Sample Input 2:
4
Sample Output 2:
      1 
    12
  123
1234
*/
 #include <iostream>
using namespace std;
int main ()
{ int n; 
 cin >> n; 
 for (int i=0 ; n>i;i++)
 {
     int temp=1; 
     for (int j=n-1-i;0<j;j--)
     {
         cout <<" "; 
     }
     for (int k=0;i>=k;k++)
     {
       cout << temp ; 
         temp++; 
     }
     cout << endl; 
 }
}

