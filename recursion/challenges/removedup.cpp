#include<iostream>
using namespace std;
string removedup(string s)
{
    if(s.length()==0)
    return "";
    char a = s[0];
    string ans = removedup(s.substr(1));
    if(a==ans[0])
    return ans;
    else
    return a+ans;
}
int main(){
cout<<removedup("aaaabbbbcccc");
}