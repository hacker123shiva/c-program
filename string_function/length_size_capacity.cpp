#include<bits/stdc++.h>
#include<string> // if you not mention super header file bits/stdc++.h then you need to mention string header file
using namespace std;

int main()
{
   string s1,s2;
   getline(cin,s1);
   cout<<s1<<"Length of string: "<<s1.length()<<endl;
   cout<<"Size of string: "<<s1.size()<<endl;
   cout<<"capacity of string: "<<s1.capacity()<<endl;
   s1.resize(50);
   cout<<"Resizing string: "<<s1.capacity()<<endl;
//    cout<<"For resize the capacity: "<<s1.resize(500);
cout<<"Max_size: "<<s1.max_size()<<endl;
s1.clear();
if(s1.empty())
cout<<"String is empty"<<endl;
else
cout<<s1<<endl;

return 0;
}