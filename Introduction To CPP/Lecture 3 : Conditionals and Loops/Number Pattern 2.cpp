/*Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.
*/
 #include <iostream>
using namespace std;
int main ()
{ 
    int n; 
    cin >> n; 
    for (int i=0 ; n>i;i++)
    {
       int  k=i+1; 
        for (int l=n-i-1;l>0 ; l--)
            {
                cout << " ";
            }
        for (int j=0 ; i>=j;j++)
        {
            
            cout <<  k; 
            k++; 
        }
        cout << endl; 
    }
}
