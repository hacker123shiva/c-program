#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float calculator(float x, float y, int choice)
{
    switch(choice)
    {
        case 1:
        return x+y;
        break;
        case 2:
        return x-y;
        break;
        case 3:
        return x*y;
        break;
        case 4:
        return x/y;
        break;
        default:
        cout<<"Invalid choice";
        return 0;
    }


    }
int main()
{   float x, y,result;
    int choice;
    cout<<"Input x and y"<<endl;
    cin>>x>>y;
    cout<<"Input choice:\n1:addition\n2:subtraction\n3:multiplication\n4:division"<<endl;
    cin>>choice;
    result=calculator(x,y,choice);
    if(result!=0)
    cout<<"Result: "<<result;
    return 0;
}