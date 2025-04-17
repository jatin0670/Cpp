#include<iostream>
using namespace std;
int main(){

string s = "naman";

int start = 0;
int end = s.size()-1;
bool yes = false;

while(start<end){
    if(s[start]!=s[end]){
        cout<<"its not a pallindrome";
        yes = true;
        return 0;
    }
start ++; end--;
}

if(!yes){
    cout<<"its pallindrome";
}
    return 0;
}