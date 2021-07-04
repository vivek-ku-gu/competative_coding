//        *           *           *           *           * 
//     *     *     *     *     *     *     *     *     *
//  *           *           *           *           *
#include<iostream>
using namespace std;
int main(){
int i,j,noOfStars;
 cout<<"ENTER THE NUMBER"<<endl;
 cin>>noOfStars;
 for(i=1; i<4; i++){
     
for(j=1;j<=noOfStars;j++){
if(((j+i)%4==0)|| (i==2 && j%4==0))
{
    cout<<" * ";
}
else
cout<<"   ";
}
cout<<endl;
 }
}