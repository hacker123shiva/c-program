#include<iostream>
using namespace std;
int maximum(int a ,int b)
{
int max;
max =a>b?a:b;
return max;
}

int main()
{
    int num1,num2;
    cout<<"Enter two number";
    cin>>num1>>num2;
    cout<<"Maximum from two number is :"<<maximum(num1,num2);
    return 0;
}
