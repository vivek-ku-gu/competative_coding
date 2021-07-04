//invertd half pyramid pattern

//              * 
//           *  * 
//        *  *  * 
//     *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main(){
// int i,j,n,m,k,l=1;
//  cout<<"ENTER THE NUMBER OF ROWS AND COLUMN"<<endl;
//  cin>>n>>m;
//  for(i=0; i<n ; i++){
//  for(j=0 ; j<m-1; j++){
// cout<<"   ";
//  }
//  m--;
//  for(k=0 ; k<l; k++){
//  cout<<" * ";
//  }
//  l++;
//  cout<<endl;
//  }
int i,j,n,m;
cout<<"ENTER THE NUMBER OF ROWS AND COLUMN"<<endl;
cin>>n>>m;
 
for(i=0; i<n ; i++){
for(j=0 ; j<m; j++){
    if(j<(n-i-1)){
        cout<<"   ";
    }
else{
    cout<<" * ";
    }
}
cout<<endl;
}
}