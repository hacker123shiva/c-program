#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=10;
    // int *p=&a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;


  int arr[]={23,34,56,78,45};
  


    //  int *arr_ptr[]={arr,arr+1,arr+2,arr+3,arr+4};
//   /  int copy_arr[]={23,34,56,78,45};
//     int *copy_ptr=copy_arr;
//     cout<<arr_ptr[1]<<" "<<*(arr_ptr[0]+1);
// char str[]="shiva";
// cout<<strlen(str);
// cout<<sizeof(str);
//     char st[][20]={"shiva","muskan","ritika"};
//  cout<<strlen(st[0]);
//  cout<<sizeof(st[0]);
// cout<<"s";


int (*a)[5];
int b[5]={1,2,3,4,5};
int i=0;
a=&b;
cout<<a<<" "<<&b<<" "<<*a<<" "<<b;

    return 0;
}

/*int (*arr)[20];   // pointer to array of 20 int
int *arr[20];     // array of 20 pointers to int*/