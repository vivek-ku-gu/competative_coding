#include<iostream>
using namespace std;
int main(){
    int n,N=1e6+2,ans=-1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
    cin>>arr[i];
    }
  int check[N];
  for(int i=0; i<N;i++){
      check[i]= 0;
  }
  for(int i=0; i<n;i++){
      check[arr[i]]= 1;
  }
  
   for(int i=0; i<N;i++){
      if(check[i]==0)
      {
          ans=i;
          break;
      }}
      cout<<ans;
      return 0;
  }
  