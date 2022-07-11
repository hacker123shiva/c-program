#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int **pp=&p;

    cout<<"&a is address operator:  "<<&a<<endl;
    cout<<"p is pointer to int of single indirection: "<<p<<endl;
    cout<<"&p is address of pointer variable: "<<&p<<endl;
    cout<<"pp is pointer to pointer to int 2 degree indirection: "<<pp<<endl;
    cout<<"*p is dereferncing of pointer p: "<<*p<<endl;
    cout<<"*pp is dereferencing of pointer pp: "<<*pp<<endl;
    cout<<"**pp is dereferncing of pointer pp and then p: "<<**pp<<endl;
}