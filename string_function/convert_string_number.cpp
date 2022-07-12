// strtol(str1,NULL,10)--convert string number into integer
// strof(str1,NULL)--convert string into float



#include<bits/stdc++.h>
using namespace std;

int main()
{char s[10]="2345";
char  s1[10]="2.345";

cout<<strtol(s,NULL,10)<<endl;
cout<<strtof(s1,NULL);

    
return 0;
}