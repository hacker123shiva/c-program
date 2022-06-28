/* while nested if statements for printing Nature of Roots of Quadratic equation and also root
find discriminant
d=b^2-4ac
if d=0 then roots are real and equal
if d>0 roots are and distinct
if d<0 then roots are imaginary

function Roots(float a ,float b , float C)

output:
cout<<"real and equal"<<r1;
cout<<"real and distinct"<<r1<<" "<r2;
cout<<"imaginary"<<r1<<" "<<r2;

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Roots(float a, float b , float c)
{
float d;
d=b*b-4*a*c;
if(d==0)
{
    cout<<"roots are real and equal r="<<-b/2*a;
    return;
}
else if(d>0)
{
    cout<<"roots are real and distinct r1="<<(-b+sqrt(d))/2*a<<"r2="<<(-b-sqrt(d))/2*a;
    return;
}
else
   cout<<"imaginary roots r1="<<-b/(2*a)<<"+i("<<sqrt(-d)/(2*a)<<")"<<", r2="<<-b/(2*a)<<"-i("<<sqrt(-d)/(2*a)<<")";
   return;
}


int main()
{
    float a, b,c;
    cout<<"Enter cofficient of quadratic polynomial a, b and c\n";
    cin>>a>>b>>c;
    Roots(a,b,c);
    return 0;
}