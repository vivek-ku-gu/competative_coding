#include<iostream>
using namespace std;
int main(){
    int n,b,temp,i,j;
    cout<<"enter the number of elements in the array you want";
    cin>>n;
    int arr[n];
    for(int a=0; a<n; a++)
{
cin>>b;
arr[a]=b;
}
 for( i=0; i<n-1; i++){
  for( j=i+1; j<n; j++){
      if(arr[i]>arr[j])
      {
         temp=arr[i];
         arr[i]= arr[j];
         arr[j]= temp;
      }
  }
 }
 for(i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
}