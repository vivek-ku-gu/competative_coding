#include<iostream>
using namespace std;
int main(){
string str= "asopieahgpoaveojalhknaoief";
int freq[26]=0;
int maxlength=  str.size();
int mxfreq=0,ans=0;
for(int i=0 ; i<maxlength; i++){
    freq[s[i]-'a']++;
}
for(int i=0; i<26; i++){
 if(mxfreq<freq[i])
 mxfreq=freq[i];
 ans=i + 'a';
}
}