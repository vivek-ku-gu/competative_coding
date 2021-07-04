//maximum sum of subarray
// order of n^3 time complexity
#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n,sum,mx=INT_MIN,count[n+1];
    count[0]=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
    cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        count[i]= count[i-1] + arr[i-1];
    }
  for(int i=1; i<=n;i++){
     sum=0;
     for(int j=0;j<i;j++){
          
          sum= count[i]- count[j];
         mx= max(mx,sum);
     }
  }
  cout<<"maximum addition of subarrays is"<<mx;
      return 0;
  }
  