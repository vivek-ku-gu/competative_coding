#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0,n;
cin>> n;
 int a[n];

for(int i=0;i<n;i++){
 cin>> a[i];
}
int j=0;
int mx= INT_MIN;
while(j<n-1)
{
if((a[j]>mx) && (a[j]>a[j+1])){
    count++;
}
else
{max(mx,a[j]);}
    j++;
}
cout<<count;
}