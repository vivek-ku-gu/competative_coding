//floyds number
//  1 
//  2  3
//  4  5  6
//  7  8  9  10
//  11  12  13  14  15
#include<iostream>
using namespace std;
int main(){
int i,j,n,m,k=1;
 cout<<"ENTER THE NUMBER OF ROWS AND COLUMN"<<endl;
 cin>>n>>m;
 for(i=1; i<=n ; i++){
 for(j=1 ; j<=i ; j++){
cout<< " "<<k<<" "; 
k++;
 }
 cout<<endl;
 }
}