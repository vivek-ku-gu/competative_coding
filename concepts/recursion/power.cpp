#include<iostream>
using namespace std;
int power(int n, int p){
if(p== 1)
{return n;}
int pow= n * power(n,p-1);
return pow;
}
int main(){
cout<<power(3,3);
}