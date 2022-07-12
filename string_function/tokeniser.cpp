#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[50]="x=10;y=20;z=35";
    // cout<<strtok(s,"=;")<<endl;
    //  cout<<strtok(NULL,"=;");
    //  cout<<strtok(s,"=;");
    char *token=strtok(s,";");
    while(token!=0)
    {
        cout<<token<<endl;
        token=strtok(NULL,";");
    }
    return 0;
}