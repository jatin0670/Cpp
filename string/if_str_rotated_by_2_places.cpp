#include<iostream>
using namespace std;

void rotateclock(string &s){
    for(int i=0; i<2; i++){
    char c = s[s.size()-1];
    int index = s.size()-2;
    while(index>=0){
    s[index+1] = s[index];
    index--;
   }
   s[0] = c;
   }
}

void rotateanti(string &s){
    for(int i=0; i<2; i++){
    char c = s[0];
    int index = 1;
    while(index<s.size()){
    s[index-1] = s[index];
    index++;
    }
    s[s.size()-1] = c;
    }
}

int main(){

string one = "leetcode";
string two = "etcodele";

string clockwise = one;
string anticlockwise = one;

rotateclock(clockwise);
if(clockwise==two){
    cout<<"clockwise";
    return 0;
}

rotateanti(anticlockwise);
if(anticlockwise==two){
    cout<<"anticlockwise";
    return 0;
}

    return 0;
}