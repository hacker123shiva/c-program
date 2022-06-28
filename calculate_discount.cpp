
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
float calculate_discount(int bill_amount)
{
if(bill_amount>=5000)
{
    bill_amount=(float)bill_amount*80/100;
    return bill_amount;
}
else if(bill_amount<5000&&bill_amount>=2000)
{
    bill_amount=(float)bill_amount*90/100;
    return bill_amount;
}
else 
{
    bill_amount=(float)bill_amount*95/100;
    return bill_amount;
}


}
int main()
{
    unsigned int bill_amount;
    cout<<"Enter bill amount";
    cin>>bill_amount;
    cout<<"Discounted amount"<<calculate_discount(bill_amount);
    return 0;
}