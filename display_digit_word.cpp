#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display_digit_word(int digit)
{
    if(digit==1)
    cout<<"one";
    else if(digit==2)
    cout<<"two";
    else if(digit==3)
    cout<<"three";
    else if(digit==4)
    cout<<"four";
    else if(digit==5)
    cout<<"five";
    else if(digit==6)
    cout<<"six";
    else if(digit==7)
    cout<<"seven";
    else if(digit==8)
    cout<<"eight";
    else if(digit==9)
    cout<<"nine";
    else if(digit==0)
    cout<<"zero";
    
    else
    cout<<"there are only 10 digits you are inputing invalid number";
    return;

}

int main()
{
    unsigned int digit;
    cout<<"Enter digit :";
    cin>>digit;
    display_digit_word(digit);
    return 0;
}