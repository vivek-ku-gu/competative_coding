#include<iostream>
#include<math.h>
using namespace std;
int a,i=2,flag=0,x,b;
void fun1(){
    cout<<"ENTER ONE NUMBER "<<endl;
    cin>>a;
for( ; i<=sqrt(a); i++){
if((a%i)==0){
    flag=1;
    break;
}
else{
     flag=0;
}
}
if(flag == 1)
cout<<"not a prime number";
else
cout<<"prime number";
}

void func2(){
 cout<<"ENTER FIRST NUMBER "<<endl;
 cin>>a;
 cout<<"ENTER SECOND NUMBER "<<endl;
 cin>>b;
    for(int j=a;j<=b;j++){
    for( i=2; i<=sqrt(j); i++)
{
if((j%i)==0){
    flag=1;
    break;
}
else flag=0;
}
if(flag == 1)
cout<<j<<":  not a prime number"<<endl;
else
cout<<j<<":  prime number"<<endl;
}
}
int main(){  
cout<<"ENTER ONE FOR FINDING IF THE NUMBER PRIME OR NOT "<<endl;
cout<<"ENTER TWO FOR FINDING RANGE OF NUMBER PRIME OR NOT "<<endl;
cin>>x;
switch (x){
    default:
cout<<"wrong input";
    break;
case 1:fun1();
break;
case 2:func2();
break;
}
}