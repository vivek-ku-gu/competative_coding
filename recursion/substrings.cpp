#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void subString(string s,string b)
{
    if(s.length()==0)
    {
         ans.push_back(b);
         return;
    }
     

      char ch = s[0];
    
    subString( s.substr(1),b);
    subString( s.substr(1),b+ch);
} 
int main()
{
    subString("ABC","");
for(auto it=ans.begin();it!=ans.end();it++)
{
    cout<<*it<<'\n';
}
}