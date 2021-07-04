#include<iostream>
using namespace std;
int main()
{
    int n,m,o;
    cin>>n;
    cin>>m;
    cin>>o;
int m1[n][m],m2[m][o],ans[n][o];
// entry of first matrix
cout<<"enter the fisrt matrix";
for(int i=0; i<n;i++){
    for(int j=i; j<m;j++){
     cin>>m1[i][j];
    }
}
// entry of second matrix
cout<<"enter the second matrix";
for(int i=0; i<n;i++){
    for(int j=i; j<o;j++){
     cin>>m1[i][j];
    }
}

// initialisation of ans matrix with 0
for(int i=0; i<n;i++){
    for(int j=i; j<o;j++){
   ans[i][j]=0;
    }
}

cout<<"multipliction is";
for(int i=0; i<n;i++){
    for(int j=i; j<o;j++){
   for(int k=0;k<m;k++)
   {
   ans[i][j]+=m1[i][k]*m2[k][j];
   }
}
}


}