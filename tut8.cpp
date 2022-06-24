/* Write a program to calculate Net Salary Program should
take as input 
1.Basic Salary
2.Percentage of Allowances
3.Percentage of Deductions
*/
#include<iostream>
using namespace std;

float Netsalary(int bs, int poa , int pod)
{
    float netsalary;
    netsalary=bs+(float)bs*poa/100-(float)bs*pod/100;
    return netsalary;
}

int main()
{
    int bs , poa, pod;
    cout<<"Enter basic salary , Percentage of Allowances , Percentage of deductions"<<endl;
    cin>>bs>>poa>>pod;
    cout<<"Netsalary: "<<Netsalary(bs, poa, pod);
    return 0;
}