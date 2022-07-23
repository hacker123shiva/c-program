#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="shiva srivastava";
    string::iterator it;
    int i=0;

    for(it=str.begin();it!=str.end();it++)
    {
        i++;
    }
    
    cout<<"Length of string is: "<<i<<endl;
    cout<<str.length()<<endl;

      for(i=0;str[i]!='\0';i++);
cout<<"Length of string: "<<i<<endl;
return 0;
}