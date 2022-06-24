#include<iostream>
using namespace std;
int sum_n_natural(int n)
{
int sum;
sum=n*(n+1)/2;
return sum;
}



int main()
{int n;
cout<<"Enter value of n :"<<endl;
cin>>n;
cout<<"Sum of "<<n<<" natural number: "<<sum_n_natural(n);
}