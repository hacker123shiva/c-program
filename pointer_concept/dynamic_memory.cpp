#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=5;
    p[1]=13;
    p[2]=3;
    p[3]=4;
    p[4]=23;
    cout<<p[1]<<endl;

    
    p=new int[10];
    cout<<p[1];
    delete []p;
    p=nullptr;
    return 0;

  


}