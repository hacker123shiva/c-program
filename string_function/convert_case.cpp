#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str="SHIVA SRIVASTAVA";
    string str1="shiv34A S(^rivasTAVA";
    string str2;
    string::iterator it;
    /*for(it=str.begin();it!=str.end();it++)
    {
        if(*it<='Z'&&*it>='A')
        cout<<*it+(char)32;
    }*/
    cout<<str2;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]<='Z'&&str[i]>='A')
        str[i]=str[i]+32;
    }
    cout<<str<<endl;
     for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]<='Z'&&str1[i]>='A')
        str2=str1[i];
        
    }
    
    cout<<str1[2];
    str1[2]='5';
    cout<<str2;

return 0;
}