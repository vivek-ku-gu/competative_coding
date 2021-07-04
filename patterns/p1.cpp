//rectangular pattern
//  *  *  *  *  * 
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main(){
 int i,j,n,m;
 cout<<"ENTER THE NUMBER OF ROWS AND COLUMN";
 cin>>n>>m;
 for(i=0 ; i<n ; i++){
 for(j=0 ; j<m ; j++){
cout<<" * ";
 }
 cout<<endl;
 }
}