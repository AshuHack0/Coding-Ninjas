 
/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/
#include <iostream>

using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    int c=n/2;
    while(i<=(n+1)/2)
    {
        int k=1;
        while(k<=(n+1)/2-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=2*i-1)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    i=1;
    while(i<=((n-1)/2))
    {
        int k=1;
        while(k<=i)
        {
            cout<<" ";
            k++;
        }
        int j=2*c-1;
        while(j>=1)
        {
            cout<<'*';
            j--;
        }
        c--;
        cout<<endl;
        i++;
    }
    return 0;
}
