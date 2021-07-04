#include<iostream>
#include<math.h>
using namespace std;

// int a,lastDigit,sum=0,n;
// void func1(){
// cout<<"enter a number to see it is armstrong or not"<<endl;
// cin>>a;
// n=a;
// while(n>0){
// lastDigit=n%10;
// sum=sum+pow(lastDigit,3);
// n=n/10;
// }
// if(sum==a) {cout<<"the number is armstrong";}
// else {cout<<"not a armstrong";} 
// }exit
int mian()
{
    int a,lastDigit,sum=0,n;
cout<<"enter a number to see it is armstrong or not"<<endl;
cin>>a;
n=a;
while(n>0){
lastDigit=n%10;
sum=sum+pow(lastDigit,3);
n=n/10;
}
if(sum==a) {cout<<"the number is armstrong";}
else {cout<<"not a armstrong";} 
return 0;
}