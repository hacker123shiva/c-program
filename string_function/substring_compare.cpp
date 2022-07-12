// strstr(main,sub); --check given substring present 
// return NULL when nothing is match
// strchr(main,char);--from left  strrchr(main,char);--from right
//strcmp(str1,str2);-- give -ve,0 ,+ve 

#include<bits/stdc++.h>
using namespace std;
int main()
{

char s1[20]="Programming";
char s2[10]="gram";
char s3[10]="m";
char s4[10]="kite";
cout<<strstr(s1,s2)<<endl;
cout<<strstr(s1,s3)<<endl;
if(strstr(s1,s4)!=NULL)
cout<<strstr(s1,s4)<<endl;
else 
cout<<"Not Found"<<endl;
cout<<strchr(s1,'r')<<endl;
cout<<strrchr(s1,'r')<<endl;
cout<<strcmp("shiva","harsh")<<endl;
cout<<strcmp("harsh","harsh")<<endl;
cout<<strcmp("harsh","shiva")<<endl;
return 0;
}