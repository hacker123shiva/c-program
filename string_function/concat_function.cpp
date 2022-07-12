// strcat(destination,source);
// strncat(destination,source,length)
#include<bits/stdc++.h>
using namespace std;

int main()
{char s1[20]="Good ";
char s2[10]="Morning";
char s3[20]="Good ";
strcat(s1,s2);
cout<<s1<<endl;
cout<<strlen(s1)<<endl;
strncat(s3,s2,3);
cout<<s3<<endl;
cout<<strlen(s3);
return 0;
}