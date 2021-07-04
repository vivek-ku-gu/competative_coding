#include<iostream>
using namespace std;
#include<climits>
int main(){
   
    int n;
    cout<<"enter the number of elements in the array you want";
    cin>>n;
    int arr[n];
    for(int a=0; a<n; a++)
{
cin>>arr[a];
}
int maxvalue= INT_MAX;
int minvalue= INT_MIN;
for(int i=0; i<n;i++){
if(arr[i]>minvalue){

minvalue= arr[i];
}
cout<<" "<<minvalue;
}
}