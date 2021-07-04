#include<iostream>
using namespace std;
int fact(int n){
if(n== 0)
{return 1;}
int fac= n* fact(n-1);
return fac;
}
int main(){
cout<<fact(5);
}