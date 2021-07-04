#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"emter the length of the string";
    cin>>n;
     cin.ignore();
    cout<<"enter the string";
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
   int i=0,maxlen=0,count=0,st=0,maxst=0;
   
   while(1)
   {
       if(arr[i]==' ' || arr[i]=='\0')
       {
           if(maxlen<count){
            maxlen=count;
            maxst= st;
       }
        st= i+1;
         count=0;
       }
       else
       count++;  
        if(arr[i]=='\0')
       break;
       
       i++;      
   }
cout<<maxlen<<endl;
for(int i=0;i<maxlen;i++){
    cout<<arr[i + maxst];
}
}