#include<bits/stdc++.h>
using namespace std;
int main()
{
   char n;
   cin>>n;
   if (n>='A' && n<='Z')
   {
    cout<<"ALPHA\nIS CAPITAL"<<endl;
   }
   else if (n>='a' && n<='z')
   {
    cout<<"ALPHA\nIS SMALL"<<endl;
   }
   else if (n>='0' && n<='9')
   {
    cout<<"IS DIGIT"<<endl;
   }
   
   
 return 0;
}