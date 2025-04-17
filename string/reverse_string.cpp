#include<iostream>
using namespace std;

int main(){

string s = "hello";

int start = 0;
int end = s.size()-1;

while(start<end){
    swap(s[start],s[end]);
    start++; end--;
}

cout<<s;

    return 0;
}