 
/*
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/

#include <iostream>
using namespace std;
int main ()
{ 
    int n;
    cin >> n; 
    for(int i=0 ; n>i;i++)
    {
        int temp=i+1; 
        for (int k=n-1-i;0<k;k--)
        {
            cout<<" ";
        }
        for (int j=0 ; i>=j;j++)
        {
            cout << temp; 
            temp++; 
        }
          int rev=2*i;  
       for (int m=i;0<m;m--)
       {
           cout <<rev;
           rev--;
       }
        cout << endl; 
    }
}

