#include<iostream>
using namespace std;
int maximum(int a ,int b,int c)
{
int max;
max =a>b&&a>c?a:b>c?b:c;
return max;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter three number";
    cin>>num1>>num2>>num3;
    cout<<"Maximum from two number is :"<<maximum(num1,num2,num3);
    return 0;
}
