#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

string s = "abc";

string rev = s;
reverse(rev.begin(),rev.end());
int size = s.size();
s+= '$';
s+= rev;
int n = s.size();

vector<int>lps(n,0);
int pre = 0;
int suf = 1;
while(suf<n){
    if(s[pre]==s[suf]){
        lps[suf] = pre+1;
        pre++;
        suf++;
    }
    else{
        if(pre==0){
            suf++;
        }
        else{
            pre = lps[pre-1];
        }
    }
}

cout<<size-lps[n-1];


    return 0;
}