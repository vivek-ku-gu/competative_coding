#include<iostream>
using namespace std;
int bitAtPosition(int n,int position){
    return ((n & (1<<position)) != 0);
}
int main(){

cout<<bitAtPosition(5,2);
}