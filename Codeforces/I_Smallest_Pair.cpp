#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    int N;
    cin>>N;
    long long  arr[N];
    for (int i = 0; i <N; i++)
    {
        cin>>arr[i];
    }
    long long smallest = LLONG_MAX;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            long long res = arr[i]+arr[j]+(j-i);
            if (res<smallest)
            {
                smallest = res;
            }
            
            
        }
        
    }
        cout<<smallest<<endl;
    
   }
   
 return 0;
}