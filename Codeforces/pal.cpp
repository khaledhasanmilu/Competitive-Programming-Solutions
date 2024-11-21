#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int arr[],int n){
    int left = 0,right=n-1;
    while(left<right)
    {
     if (arr[left]!=arr[right])
     {
        return false;
     }
     left++;
     right--;
        
    }
    return true;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   if (isPalindrome(arr,n)==true)
   {
    cout<<"Palindrome"<<endl;
   }
   else
   {
    cout<<"Not Palindrome"<<endl;
   }
   
   
   
 return 0;
}