#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n,a,mn;
    mn=INT_MAX;
    cin>>n;
    int arr[n];
     for(int i=0; i<n;i++){
     cin>>arr[i];
    }
    a=1e6+2;
     int idx[a];
    for(int i=0; i<a;i++){
    idx[i]= -1;
    }
  
  for(int b=0; b<n;b++){
    if(idx[arr[b]]!= -1)
    {
     mn = min(mn,idx[arr[b]]);
    }
    else
    {
        idx[arr[b]]=b;
    }
    }
    cout<<mn<<endl;
}