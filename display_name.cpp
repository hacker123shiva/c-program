#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display_day(int day)
{
    if(day==1)
    cout<<"sun";
    else if(day==2)
    cout<<"mon";
    else if(day==3)
    cout<<"tue";
    else if(day==4)
    cout<<"wed";
    else if(day==5)
    cout<<"thr";
    else if(day==6)
    cout<<"fri";
    else if(day==7)
    cout<<"sat";
    else
    cout<<"Invalid Input";
    return;

}

int main()
{
    unsigned int day;
    cout<<"Enter day number :";
    cin>>day;
    display_day(day);
    return 0;
}