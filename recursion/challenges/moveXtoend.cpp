#include<bits/stdc++.h>
using namespace std;
string Movex(string s)
{
    if(s.length() == 0)
       return"";
       char ch= s[0];
   string ans = Movex(s.substr(1));
    if(ch=='x')
      return ans+ ch;
    return ch+ ans;


}
int main()
{
    string ans="helxxollox";
 cout<<Movex(ans);
}