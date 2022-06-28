#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display_day(int month)
{
    if(month==1)
    cout<<"jan";
    else if(month==2)
    cout<<"feb";
    else if(month==3)
    cout<<"mar";
    else if(month==4)
    cout<<"apr";
    else if(month==5)
    cout<<"may";
    else if(month==6)
    cout<<"june";
    else if(month==7)
    cout<<"july";
    else if(month==8)
    cout<<"aug";
    else if(month==9)
    cout<<"sep";
    else if(month==10)
    cout<<"oct";
    else if(month==11)
    cout<<"nov";
    else if(month==12)
    cout<<"dec";
    else
    cout<<"Invalid Input";
    return;

}

int main()
{
    unsigned int month;
    cout<<"Enter month number :";
    cin>>month;
    display_day(month);
    return 0;
}