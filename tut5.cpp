#include<iostream>
using namespace std;
float SimpleInterest(int P , int R ,int T)
{
    float S_I;
    S_I=(float)(P*R*T)/100;
    return S_I;
}
int main()
{
    int P,R,T;
cout<<"Enter the value of P,R,T"<<endl;
cin>>P>>R>>T;
cout<<"Simple Interest: "<<SimpleInterest(P,R,T);
}