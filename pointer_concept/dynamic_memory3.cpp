 
#include<bits/stdc++.h>
using namespace std;
int main()
{ //ptr = (cast-type*)calloc(n, element-size);
    int *p= (int *)calloc(5,sizeof(int));
    p[0]=5;
    p[1]=13;
    p[2]=3;
    p[3]=4;
    p[4]=23;
    cout<<p[1]<<endl;
// dynammicaly increasing sie we use realloc function void * realloc(void*ptr, size_t sizes)
    p=(int*)realloc(p,10*4);
    cout<<p[1];
    free(p);
    return 0;

  


}