 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {char s1[50]="Hello";
 cout<<strlen(s1)<<endl;
 cout<<sizeof(s1)<<endl;

char *s2="Hello";
cout<<strlen(s2)<<endl;
cout<<sizeof(s2)<<endl;
cout<<sizeof("hello");
//here you clearly see difference between char array and char pointer 
char s3[][20]={"shiva","harsh","muskan","love"};
cout<<strlen(s3[1])<<endl;
cout<<strlen(s3[3])<<endl;
cout<<sizeof(s3)<<endl;

char *s4[]={"shiva","muskan","harsh","love"};
cout<<strlen(s4[1])<<endl;
cout<<sizeof(s4)<<endl;
cout<<sizeof(s4[1])<<endl;
 return 0;
 }
 