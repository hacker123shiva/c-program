#include<bits/stdc++.h>
using namespace std;

int main()
{/*
string::iterator
begin()
end()
reverse_iterator
rbegin()
rend()
*/
string::iterator it;
//string::reverse_iterator it;
string str="shiva";
int i=0;
 for(it=str.begin();it!=str.end();it++)// for(it=str.rbegin();it!=str.rend();it++)
 {cout<<*it<<endl;
i++;}

return 0;
}