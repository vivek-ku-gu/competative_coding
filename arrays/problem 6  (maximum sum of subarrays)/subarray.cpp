//maximum sum of subarray
// order of n^3 time complexity
#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n,sum,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
    cin>>arr[i];
    }
  for(int i=0; i<n;i++){
     for(int j=i;j<n;j++){
          sum=0;
         for(int k=i;k<=j;k++)
{
     sum+= arr[k];
     mx=max(sum,mx);
      cout<<arr[k]<<" ";
}
     cout<<endl;
     }
  }
  cout<<"maximum addition of subarrays is"<<mx;
      return 0;
  }
  