#include<iostream>
#include<vector>
using namespace std;


// not got it.

void lpsfind(vector<int>&lps, string s){
    int pre = 0;
    int suf =1;

    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf] = pre+1;
            pre++;
            suf++;
        }
        else{
            if(pre==0){
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
}

int main(){

string heystack = "sadbutsad";
string needle = "sad";

vector<int>lps(needle.size(),0);
lpsfind(lps, needle);
int first = 0;
int second = 0;

while(second<needle.size()&&first<heystack.size()){
    if(heystack[first]==needle[second]){
        first++;
        second++;
    }
    else{
        if(second==0){
            first++;
        }
        else{
            second = lps[second-1];
        }
    }
}

if(second == needle.size()){
    cout<<first-second;
}
else{
    cout<<-1;
}

    return 0;
}