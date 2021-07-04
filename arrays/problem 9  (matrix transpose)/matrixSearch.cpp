#include<iostream>
using namespace std;
int main()
{
int n,m,key;
cin>>n>>m;
int matrix[n][m];
cout<<"Enter the key you want to search";
cin>>key;
cout<<"Enter the matrix";
for(int i=0; i<n;i++){
    for(int j=i; j<m;j++){
    cin>>matrix[i][j];
    }
}


if(matrix[n][m]<key){
    cout<<"key not present";
    return 0;
}


for(int i=0; i<n;){
    for(int j=m-1; j>=0;){
  
     if(matrix[i][j]==key){
       cout<<key<<"key is present";
       return 0;
     }
     else if(matrix[i][j]>key)
     {
      j--;
     }
     else
     i++;
    }
}

}