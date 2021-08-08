#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
int n1 = (mid-l)+1;
int n2 = r-mid;

    int arr1[n1];
    int arr2[n2];
  for(int i=0; i<n1;i++)
  {
  arr1[i]= arr[l+i];
  }
    for(int i=0; i<n1;i++)
  {
  arr2[i]= arr[mid+i+1];
  }
  int i=0,j=0,k=l;
  while (i<n1 && j<n2)
  {
      if(arr1[i] < arr2[j])
      {
       arr[k]= arr1[i];
       k++;i++;
      }
      else{
       arr[k]= arr2[j];
       k++;j++;
      }
  }
  while(j<n2)
  {
      arr[k]= arr2[j];
      k++; j++;
  }
  while(i<n1)
  {
      arr[k]= arr1[i];
      k++; i++;
  }

}
void mergesort(int arr[],int l,  int r )
{
if(l<r)
{
int mid = (l+r)/2;
mergesort(arr,l,mid);
mergesort(arr,mid,r);
merge(arr,l,mid,r);
}
}
int main()
{
    int arr[] = {2,1,6,3,7,3};
    int n ; 
    n = *(&arr + 1) - arr;
    mergesort(arr,0,n);
    for(int i =0; i<n;i++)
    {
        cout<<arr;
    }
    
}
    


