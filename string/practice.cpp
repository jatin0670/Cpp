#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

  // longest substring without repeating character

string s = "abcdecbeadf";

vector<bool>count(255,0);
int first = 0;
int second = 0;
int len = 0;

while(second<s.size()){
  while(count[s[second]]){
    count[s[first]] = 0;
    first++;
  }
  count[s[second]] = 1;
  len = max(len, second-first+1);
  second++;
}

cout<<len;

  return 0;
}