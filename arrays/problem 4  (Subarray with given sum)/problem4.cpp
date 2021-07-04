#include<iostream>
using namespace std;
int main(){
    int n,s;
    int arr[n];
    cin>>n;
    cin>>s;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
   int i=0,j=0,sum;
   while(i<n)
   {
       sum= sum+arr[i];
      
       while(sum>s){
           sum= sum- arr[j];
           j++;}
       if(sum == s){cout<<j<<" "<<i; return 0;}
        i++;
   }
   return 0;
}