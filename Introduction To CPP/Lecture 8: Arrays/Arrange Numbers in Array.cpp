#include <iostream>
using namespace std;

  void arrange(int *arr, int n)
{
     for(int i=0 ; n/2>i;i++)
     {
         arr[i]=2*i+1; 
     }
     if(n%2!=0)
     {
         arr[n/2]=n;
     }
     if(n%2==0)
     {
         arr[n/2]=n; 
     }
     int ans=1; 
     for (int i=n-1 ; n/2<i;i--)
     {
         arr[i]=ans*2; 
         ans++; 
     }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
