#include<bits/stdc++.h>
using namespace std;

int main()
{
string str1="Hello";
string str2="world";
string str="Programming";
cout<<str1.compare(str2)<<endl;
// cout<<"Hello".compare("Hello"); must there be object of type string
cout<<str1.compare("Hello")<<endl;
cout<<str2.compare(str1)<<endl;
cout<<str.substr(3,4);
return 0;
}