#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[10000];
   cin.getline(s,10000);
    int size = strlen(s);
    sort(s,s+size);
   for (int i = 0; i < size; i++)
   {
    if(s[i]!=32){
        cout<<s[i];
    }
   }
   

 return 0;
}