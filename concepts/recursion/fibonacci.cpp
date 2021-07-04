#include<iostream>
using namespace std;
int fibonacci(int n){
if(n== 0 || n==1)
{return n;}
int fibo=  fibonacci(n-1) + fibonacci(n-2);
return fibo;
}
int main(){
cout<<fibonacci(8);
}