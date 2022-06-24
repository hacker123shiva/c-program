#include<iostream>
#include<cmath>
using namespace std;

float volume_cylinder(int h, int r)
{
    float volume ;
    volume=M_PI*r*r*h;
    return volume;
}

int main()
{
    int r, h;
    cout<<"Enter value off r and h"<<endl;
    cin>>r>>h;
    cout<<"Volume of cylinder: "<<volume_cylinder(h,r);
    return 0;
}