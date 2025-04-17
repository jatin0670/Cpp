#include<iostream>
using namespace std;
int main(){

string s1 = "abacdabac";
string s2 = "abac";

int n = s1.size();
int m = s2.size();
int count=-1;


for(int i=0; i<=(n-m); i++){
    int first = i;
    int second =0;
    while(second<m){
        if(s1[first]!=s2[second]){
            break;
        }
        else{
            first++;
            second++;
        }
    }
  if(second==m){
        count = (first-second);
    }

}
  

cout<<count;
    return 0;
}