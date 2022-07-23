#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str1="shiva",str2="harsh";
str1.append(" harsh");
cout<<str1<<endl;
str2.append(str1);
cout<<str2<<endl;
cout<<str1.rfind('h');
return 0;
}