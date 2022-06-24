/*
Write an expression for calculating Distance 
Parameters are:
u--intial velocity
v--final velocity
a--acceleration
*/
#include<iostream>
using namespace std;

float CalculateDistance(int u, int v ,int a)
{
    float distance;
    distance=(float)(v*v-u*u)/(2*a);
    return distance;
}

int main()
{
    int u ,v, a;
    cout<<"Enter value of u, v, a:"<<endl;
    cin>>u>>v>>a;
    cout<<"Distance covered is : "<<CalculateDistance(u,v,a);
    return 0;
}