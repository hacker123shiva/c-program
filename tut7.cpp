/*
Write an Expression for finding Distance between 2 Point
parameters:
x1,y1--first point 
x2,y2--second point
*/

#include<iostream>
#include<cmath>
using namespace std;

float Distance_two_points(int x1 ,int y1, int x2, int y2)
{
    float distance;
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distance;
}

int main()
{
    int x1, y1, x2, y2;
    cout<<"Enter value of x1 , y1, x2 and y2: "<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout<<"Distance between two points "<<"("<<x1<<","<<y1<<")"<<" and ("<<x2<<","<<y2<<") is "<<Distance_two_points(x1,y1,x2,y2);

    return 0;
}