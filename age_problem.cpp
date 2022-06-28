/*write conditional to check age and display a message parameter for CheckAge(int age)
age --age of the person 
young -if age is greater than or equal to 12 and less than or equal to 50 otherwise not young
output:
young
not young
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void CheckAge(int age)
{
if(age<=50&&age>=12)
cout<<"Young";
else
cout<<"Not Young";
}

int main()
{
    int age ;
    cout<<"Enter age";
    cin>>age;
    CheckAge(age);
    return 0;
}
