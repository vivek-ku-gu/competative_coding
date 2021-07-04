#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n,ans=2;
    cout<<"enter the number of elememts in the array";
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int cd=a[1]-a[0];
    int count = 2;
   int j=2;
      while(j<n){
          if(cd == a[j]- a[j-1])
          {count++;}
          else{
              cd= a[j]- a[j-1];
              count=2;
          }
          j++;
          ans = max(ans, count);
      }
     cout<<ans;
    }