#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int i=1,x=0,y;
y=x&&i++;
cout<<"short circuit due to &&"<<endl;
cout<<"i:"<<i<<" y:"<<y<<endl;
y=x||i++;
cout<<"i:"<<i<<" y:"<<y<<endl;
x=y&&i++;
cout<<"i:"<<i<<" x:"<<x<<endl;
y=x||i++;
cout<<"short circuit due to ||"<<endl;
cout<<"i:"<<i<<" y:"<<y<<endl;
}