//              1
//           2  1  2
//        3  2  1  2  3
//     4  3  2  1  2  3  4
//  5  4  3  2  1  2  3  4  5
#include<iostream>
using namespace std;
int main(){

    //my code

int i,j,n,no;
 cout<<"ENTER THE NUMBER"<<endl;
 cin>>n;
 for(i=1; i<=n ; i++){
 for(j=1 ; j<=n-i ; j++){
cout<< "   "; 
 }
 no=i;
 for(j=1 ; j<=i ; j++){
cout<< " "<<no<<" "; 
no--;
 }
 for(j=1 ; j<=i-1 ; j++){
cout<< " "<<j+1<<" ";
 }
 cout<<endl;
 }
  
  // code i got
// int i,j,n,no;
//  cout<<"ENTER THE NUMBER"<<endl;
//  cin>>n;
//  for(i=1; i<=n ; i++){
//  for(j=1 ; j<=n-i ; j++){
// cout<< "   "; 
//  }
//  no=i;
//  for(; j<=n ; j++){
// cout<< " "<<no--<<" "; 
//  }
//  no=2;
//  for(; j<=n+i-1; j++){
// cout<< " "<<no++<<" ";
//  }
//  cout<<endl;
//  }
}