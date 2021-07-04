#include<iostream>
using namespace std;
int prod(int n){
if(n== 1)
{return 1;}
int pro= n * prod(n-1);
return pro;
}
int main(){
cout<<prod(4);
}