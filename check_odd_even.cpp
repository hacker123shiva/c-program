#include<iostream>
using namespace std;

string even_odd(int num)
{
    if(num%2==0)
    {
        return "Even Number";
    }

    else
    {
        return "Odd Number";
    }

}

int main()
{
int num;
cout<<"Enter a number"<<endl;
cin>>num;
cout<<even_odd(num);
return 0;

}