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
// dynammicaly increasing sie we use realloc function void * realloc(void*ptr, size_t sizes)
    p=(int*)realloc(p,10*4);
    cout<<p[1];
    return 0;

  


}