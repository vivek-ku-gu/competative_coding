
//  1 
//  2  2
//  3  3  3
//  4  4  4  4
//  5  5  5  5  5
#include<iostream>
using namespace std;
int main(){
int i,j,n,m;
 cout<<"ENTER THE NUMBER OF ROWS AND COLUMN"<<endl;
 cin>>n>>m;
 for(i=1; i<=n ; i++){
 for(j=1 ; j<=i ; j++){
cout<< " "<<i<<" "; 
 }
 cout<<endl;
 }
}