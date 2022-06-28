#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char Grade(int marks1,int marks2 , int marks3)
{
    float percent;
    percent=(float)(marks1+marks2+marks3)/300*100;
    if(percent>=60)
    return 'A';
    else if(percent>=35 && percent<60)
    return 'B';
    else
    return 'C';

}

int main()
{
    int marks1, marks2, marks3;
    cout<<"Enter marks of three subjects"<<endl;
    cin>>marks1>>marks2>>marks3;

    cout<<"Grade is "<<Grade(marks1,marks2,marks3);
    return 0;
}
