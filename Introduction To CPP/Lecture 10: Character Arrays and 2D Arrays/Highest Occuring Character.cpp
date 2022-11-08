/*
For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.
Consider:
Assume all the characters in the given string to be in lowercase always.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The only line of output prints the updated string. 
Note:
You are not required to print anything explicitly. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x
*/
#include <iostream>
#include <cstring>
using namespace std;

  #include<map>
 char highestOccurringChar(char input[]) {
     
    //  method 1
   /* int max[strlen(input)];
    for(int i=0 ;strlen(input)>i;i++)
    {
        int count=0;
        for (int j=i+1 ;strlen(input) >j;j++)
        {
            if(input[i]==input[j])
            {
                count++;
            }
        }
        max[i]=count+1;

    }
    int hi=0;
    for (int i=1 ;strlen(input)>i;i++)
    {
         int maxi=max[0];

         if(maxi<max[i])
        {
            maxi=max[i];
            hi=i;
        }
    }
    return input[hi];
*/  
// method 2
     /* map<char,int> m;
      for(int i=0;strlen(input)>i;i++)
      {
          m[input[i]]=m[input[i]]+1; 
      }
      map<char , int > ::  iterator it;
       int maxi=0;
      char hi;
      for (it=m.begin() ; it!=m.end() ;it++)
      {
          if(it->second>maxi)
          {
              maxi=it->second;
              hi=it->first;
          }
      }
      return hi;
      */
      // method 3
      
      int arr[26]={0}; 
      int maxf=0; 
      for (int i=0 ; strlen(input)>i;i++)
      {
          arr[int(input[i])-'a']+=1;
          maxf=max(maxf,arr[int(input[i])-'a']);
      }
      char ans; 
      for (int i=0 ; strlen(input)>i;i++)
      {
          if(arr[int(input[i])-'a']==maxf)
          {
              ans=input[i]; 
              break;
          }
      }
      return ans; 
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
