#include<iostream>
#include<vector>
using namespace std;

// by function---------------------------------------

// void getlps(string s){
//     vector<int>lps(s.size(),0);
//     int pre = 0;
//     int suf =1;

//     while(suf<s.size()){
//         if(s[pre]==s[suf]){
//             lps[suf] = pre+1;
//             pre++;
//             suf++;
//         }
//         else{
//             if(pre==0){
//                 lps[suf] = 0;
//                 suf++;
//             }
//             else{
//                 pre = lps[pre-1];
//             }
//         }
//     }
//     cout<<lps[s.size()-1];
// }

int main(){

string s = "ABCABDABCABDABDAB";

vector<int>lps(s.size(),0);
int pre = 0;
int suf = 1;

while(suf<s.size()){
    if(s[pre]==s[suf]){
        lps[suf] = pre+1;
        pre++;
        suf++;
    }
    else{
        if(pre==0){
            lps[suf]=0;
            suf++;
        }
        else{
            pre = lps[pre-1];
        }
    }
}

cout<<lps[s.size()-1];

    return 0;
}