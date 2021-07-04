#include<iostream>
#include<climits>
using namespace std;
bool pairsumOrderofn(int arr[],int n,int k)
{
    int i=0,j=n-1;
while(j>i)
{
    if((arr[i]+arr[j])== k)
{cout<<i<<" "<<j<<endl;
    return true;}
    else if((arr[i]+arr[j])> k)
    {
     j--;
    }
    else 
    {
        i++;
    }
}
return false;
}
int main(){
 int n,k;
 bool res;
  cin>>n;
    cin>>k;
  int arr[n];
  for(int i=0; i<n;i++){
      cin>>arr[i];
  }
 res= pairsumOrderofn(arr, n,k);
 cout<<res;
}