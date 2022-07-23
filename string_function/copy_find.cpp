#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
string s1="shivash";
char des[20],he[20];
char *ptr="hello";
//strcpy(he,he); //we cannot do strcpy(s1,des)
s1.copy(des,s1.length());
cout<<des<<endl;
des[s1.length()]='\0';
cout<<des<<endl;
cout<<s1.find("l")<<endl; //if result greater than length it means charcter or string not exist
cout<<s1.find("sh")<<endl;
cout<<s1.rfind("sh")<<endl;
cout<<s1.find_first_of('s')<<endl;//if value is not found give gaarbage value
cout<<s1.find_last_of('s')<<endl;

return 0;
}