#include<iostream>

#include<climits>
using namespace std;
int kandane(int arr[],int n)
{
 int mx=INT_MIN,currentsum=0;  
  for(int i=0;i<n; i++){
      currentsum= arr[i]+currentsum;
      if(currentsum<0)
      {
          currentsum=0;
      }
      mx= max(mx,currentsum);
  }
 return mx;
}
int main(){
 int n,mx=INT_MIN,currentsum=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
      cin>>arr[i];
  }
  int maxsum=0;
  int unwrap=kandane(arr,n);
 
  for(int i=0;i<n; i++){
     maxsum += arr[i];
     arr[i] = - arr[i];
  }
   int wrap = maxsum + kandane(arr,n);
mx= max(wrap,unwrap);
  cout<<mx;
}