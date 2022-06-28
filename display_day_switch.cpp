#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display_day(int day)
{switch(day)
   { case 1:
    cout<<"sun";
    break;
    case 2:
    cout<<"mon";
    break;
    case 3:
    cout<<"tue";
    break;
    case 4:
    cout<<"wed";
    break;
    case 5:
    cout<<"thr";
    break;
    case 6:
    cout<<"fri";
    break;
    case 7:
    cout<<"sat";
    break;
    default:
    cout<<"Invalid Input";
   }
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