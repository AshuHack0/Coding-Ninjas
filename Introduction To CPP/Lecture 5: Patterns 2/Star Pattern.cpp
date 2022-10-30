/*
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/
  #include <iostream>
 using namespace std;
 int main ()
 {
      int n; 
     cin >> n;
     for (int i=0; n>i;i++)
     {
         for (int k=n-1-i; 0<k;k--)
         {
             cout << " "; 
         }
         for (int j=0 ; 2*i+1>j;j++)
         {
             cout << "*"; 
         }
         cout << endl; 
     }
 }