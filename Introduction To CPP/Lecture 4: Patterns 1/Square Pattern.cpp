/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
*/

     #include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
   for (int i=0 ; n>i;i++)
   {
       for(int j=0 ; n>j;j++)
       {
           cout <<n;
       }
       cout << endl;
   }
}



