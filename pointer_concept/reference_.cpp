#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    x++;
    y++;
    cout<<"x "<<x<<" y "<<y;
}