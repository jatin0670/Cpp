#include<iostream>
#include<vector>
using namespace std;
int main(){

string s = "lEetcOde";

vector<int>upper(26,0);
vector<int>lower(26,0);

for(int i=0; i<s.size(); i++){
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        upper[s[i] - 'A']++;
        s[i] = '#';
    }
}

for(int i=0; i<s.size(); i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        lower[s[i] - 'a']++;
        s[i] = '#';
    }
}

string ans;

for(int i=0; i<26; i++){
    char c = 'A' + i;
    while(upper[i]>0){
        ans+= c;
        upper[i]--;
    }
}

for(int i=0; i<26; i++){
    char c = 'a' + i;
    while(lower[i]>0){
        ans+= c;
        lower[i]--;
    }
}

int first = 0;
int second = 0;

while(second<ans.size()){
    if(s[first] == '#'){
        s[first] = ans[second];
        second++;
    }
    first++;
}

cout<<s;

    return 0;
}