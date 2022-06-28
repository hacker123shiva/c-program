/* Write conditional statements to check if a person is eligible for other 
parameters for eligibility 

if price of total item you buy greater than 1000 then you are eligible 
cout<<"eligible";
otherwise 
cout<<"not eligible"

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void eligible_offer(int money)
{
    if(money>1000)
    {
        cout<<"eligible";
    }
    else
    cout<<"not eligible";
    return;
}

int main()
{
    int money;
    cout<<"Enter total price of products you buy"<<endl;
    cin>>money;
    eligible_offer(money);
    return 0;

}