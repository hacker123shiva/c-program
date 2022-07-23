#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{string s1,s2;
cout<<"Input s1 and s2"<<endl;
getline(cin,s1);
getline(cin,s2);
cout<<s1<<endl;
cout<<s2<<endl;
s1.replace(3,5,"ss");
cout<<s1<<endl;
s1.push_back('z');
cout<<s1<<endl;
s1.pop_back();
cout<<s1<<endl;
s1.swap(s2);
cout<<s1<<endl<<s2;
s1.erase();
cout<<s1<<endl;
s2.clear();
cout<<s2<<endl;
if(s1.empty()&&s2.empty())
    cout<<"Empty strings";
return 0;
}