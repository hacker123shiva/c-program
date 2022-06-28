/*Write condition to check is given time is Working hours or not 
condition
if hour is from 9 to 18  its working hours
otherwise leisure
*/


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void working(int hour)
{
    if(hour<=18 && hour>=9)
    cout<<"working";
    else 
    cout<<"leisure";
    return;
}
int main()
{
    int hour;
    cout<<"Input hour\n";
    cin>>hour;
    working(hour);
    return 0;
}