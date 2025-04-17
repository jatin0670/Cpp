#include<iostream>
#include<vector>
using namespace std;

int main(){

string s = "abcdecbeadf";
vector<bool>count(256,0);
int first = 0, second = 0, lng = 0;

while(second<s.size()){
    while(count[s[second]]>0){
        count[s[first]] = 0;
        first++;

    }
    count[s[second]] = 1;
    second++;
    lng = max(lng,second-first);
}

cout<<lng;

    return 0;
}