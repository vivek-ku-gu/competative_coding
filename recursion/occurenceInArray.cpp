#include<iostream>
using namespace std;
int i=0;
int firstocc(int arr[], int n,int key){
    if(n==i)
    return -1;
    if(key==arr[i])
    return i;
    i++;
   return  firstocc(arr, n, key);
}

int lastocc(int arr[], int n,int key)
{
     if(i==0)
    return -1;
    if(key==arr[i])
    return i;
    i--;
   return  firstocc(arr, n, key);
}
int main(){
    int n;
    cin>>n;
    int arr[] = {1,2,3,4,2} ;
int ans = firstocc(arr,n,2);
cout<<ans;
i=n;
ans =lastocc(arr,n,2);
cout<<ans;
}