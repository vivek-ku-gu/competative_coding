#include<iostream>
using namespace std;
void pirep(string s)
{
if(s.length()==0)
return;
if(s[0]=='p' && s[1]=='i'){
    cout<<3.14;
    string var = s.substr(2);
    pirep(var);
}
else
{
cout<<s[0];
string var = s.substr(1);
pirep(var);
}
}
int main(){
pirep("pipppipiiiiipi");
}