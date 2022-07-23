#include<bits/stdc++.h>
using namespace std;

int main()
{string str,str1="shi";
int i;
int fr[128]={0};
getline(cin,str);
for(int i=0;str[i]!='\0';i++)
fr[str[i]]++;
i=0;
for(auto x:fr)
{cout<<i++<<": "<<x<<" "<<endl;}
 str.clear();
cout<< str.compare("shiva");

return 0;
}