//  *                          * 
//  *  *                    *  *
//  *  *  *              *  *  *
//  *  *  *  *        *  *  *  *
//  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  * 
//  *  *  *  *        *  *  *  *
//  *  *  *              *  *  *
//  *  *                    *  *
//  *                          *
#include<iostream>
using namespace std;
int main(){
int i,j,n;
 cout<<"ENTER THE NUMBER "<<endl;
 cin>>n;

 //upper part
 for(i=1; i<=n ; i++){
 for(j=1 ; j<=i ; j++){
cout<<" * ";
 }
 int count = 2*n - 2*i; 
 for(j=1 ; j<=count ; j++){
cout<<"   ";
 }
  for(j=1 ; j<=i ; j++){
cout<<" * ";
 }
 cout<<endl;
 }
 //lower part
 for(i=n; i>=1 ; i--){
 for(j=1; j<=i ; j++){
cout<<" * ";
 }
 int count = 2*n - 2*i; 
 for(j=1 ; j<=count ; j++){
cout<<"   ";
 }
  for(j=1 ; j<=i ; j++){
cout<<" * ";
 }
 cout<<endl;
 }

}