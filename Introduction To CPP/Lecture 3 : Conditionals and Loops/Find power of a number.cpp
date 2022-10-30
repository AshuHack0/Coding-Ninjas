/*
Find power of a number
Send Feedback
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n;
    cin >>x >>n;
    int power=1;
    if(x==0 && n==1)
    {
        cout<< "0"; 
        return 0;
    }
    if(n==0)
    {
        cout << "1"; 
            return 0; 
    }
    for (int i=0 ;n>i;i++)
    {
        power=power*n; 
    }
    cout << power;
    return 0;
	
}
