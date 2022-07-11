/*There are main 5 five arithemetic operation in pointer.
int A[5]={2,4,6,8,10};
int *p=A; int *q=&A[3];

1.p++;
2.p--;
3.p=p+2;
4.p=p-2;
5.d=p-q;

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int A[5]={2,4,6,8,10};
int *p=A;
int *q=&A[3];
cout<<*(p+4)<<" 10"<<endl;
cout<<*(q-3)<<" 2"<<endl;
cout<<*(++p)<<" 4"<<endl;
cout<<*(--p)<<" 2"<<endl;
cout<<p-q; 
return 0;
}
/*
problem when using pointer 
1.Uniitiaalized pointer
2.Memory leak
3.Dangling pointer
*/