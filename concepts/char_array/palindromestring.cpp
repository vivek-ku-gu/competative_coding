#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"emter the length of the string";
    cin>>n;
    cout<<"enter the string";
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0; i<n;i++){
        if(arr[i]!= arr[n-1-i])
        {check=0;
        break;}
    }
    if(check)
    cout<<"it is a palindrome";
    else 
    cout<<"not a palindrome";

}