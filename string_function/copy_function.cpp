// strcpy(destination,source)
// strncpy(destination,source,length)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   char s[20];
   char s1[18]="shiva srivastava";
   char s2[20];
   strcpy(s,s1);
   cout<<s<<endl;
   cout<<strlen(s)<<endl;
   strncpy(s2,s1,5);
   cout<<s2<<endl;
   cout<<strlen(s2)<<endl;

return 0;
}