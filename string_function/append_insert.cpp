#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Input string s1 and s2";
    getline(cin,s1);
    getline(cin,s2);
    cout<<s1<<endl<<s2<<endl;
    s1.append(" bye");
    cout<<s1<<endl;
    s1.insert(3,"shiva");
    cout<<s1<<endl;
    s2.insert(4,"shivasssss",5);
    cout<<s2<<endl; 
return 0;
}