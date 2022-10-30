

/*
Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
*/


#include<iostream>
using namespace std; 
int main ()
{
    int n; 
    cin >> n; 
    int sum=0; 
    for (int i=0; n>=i;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout << sum; 
}
