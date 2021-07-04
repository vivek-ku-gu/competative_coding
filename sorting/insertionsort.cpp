// #include<iostream>
// using namespace std;
// int main(){
//     int n,b,temp,i;
//     cout<<"enter the number of elements in the array you want";
//     cin>>n;
//     int arr[n];
//     for(int a=0; a<n; a++)
// {
// cin>>b;
// arr[a]=b;
// }

// for(i=0;i<n-1;i++){
//       if(arr[i+1]>arr[i])
//       {
//         continue;
//       }
//     else
//      for(int j =0; j<i;j++){
//       if(arr[j]<arr[i+1])
//       {
//          temp=arr[j+1];
//          arr[j+1]= arr[i+1];
//          arr[i+1]= temp;
//        }
//       }

//      }

//  for(i=0;i<n;i++){
// cout<<arr[i]<<" ";
//  }
// }


#include<iostream>
using namespace std;
int main(){
    int n,b,temp,i;
    cout<<"enter the number of elements in the array you want";
    cin>>n;
    int arr[n],current,previous;
    for(int a=0; a<n; a++)
{
cin>>b;
arr[a]=b;
}

for(i=1;i<n;i++){
     current= arr[i];
     previous=i-1;
     while(arr[previous]>current && previous>=0){
       arr[previous+1]=arr[previous];
       previous--;
     }
     arr[previous+1]=current;
     }

 for(i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
}