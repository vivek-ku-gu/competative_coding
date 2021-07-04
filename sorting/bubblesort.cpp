#include<iostream>
using namespace std;
int main(){
    int n,b,temp,i,count=1;
    cout<<"enter the number of elements in the array you want";
    cin>>n;
    int arr[n];
    for(int a=0; a<n; a++)
{
cin>>b;
arr[a]=b;
}
while(count<n){
for(i=0;i<n-count;i++){
      if(arr[i]>arr[i+1])
      {
         temp=arr[i];
         arr[i]= arr[i+1];
         arr[i+1]= temp;
      }
}
      count++;
  
}
 for(i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
}