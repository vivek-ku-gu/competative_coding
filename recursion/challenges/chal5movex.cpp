#include<iostream>
using namespace std;
string movex(string s)

{
if(s.length()==0)
return "";
char a = s[0];
string ans= movex(s.substr(1));
if('x'==a)
return ans + a;
else
return a + ans;
}
int main(){
cout<<movex("axxxsdaslhxs");
}