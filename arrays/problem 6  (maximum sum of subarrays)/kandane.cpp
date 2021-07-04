#include<iostream>

#include<climits>
using namespace std;
int main(){
 int n,mx=INT_MIN,currentsum=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
      cin>>arr[i];
  }
  
  for(int i=0;i<n; i++){
      currentsum= arr[i]+currentsum;
      if(currentsum<0)
      {
          currentsum=0;
      }
      mx= max(mx,currentsum);
  }
  cout<<mx;
}