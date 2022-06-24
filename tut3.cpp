/*
Writing an expression for finding a positive root  of 
Quadratic equation write one positive formula at line
*/

#include<iostream>
#include<cmath>
using namespace std;

float* root(int a , int b ,int c)
{
static float root[2];;
root[0]=(float)(-b+sqrt(b*b-4*a*c))/(2*a);
root[1]=(float)(-b-sqrt(b*b-4*a*c))/(2*a);
return root;
}
int main()
{
    int a, b, c;
    float * zero;
    cout<<"Enter value of a , b ,c :"<<endl;
    cin>>a>>b>>c;
    zero=root(a,b,c);
    if(zero[0]>0)
    cout<<"root1 is: "<<zero[0]<<endl;

    else
    cout<<"root1 is not positive"<<endl;

    if(zero[1]>0)
    cout<<"root2 is: "<<zero[1];
    else
    cout<<"root2 is not positive";
    return 0;
}
