#include<iostream>
using namespace std;
string behaviour(int num)
{
    if(num>0)
    return "Positive Number";
    else if(num<0)
    return "Negative Number";
    else
    return "Zero";
}

int main()
{
    int num;
    cin>>num;
    cout<<behaviour(num);
    return 0;
    
}