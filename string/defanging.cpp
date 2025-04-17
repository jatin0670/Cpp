#include<iostream>
using namespace std;
int main(){

string add = "1.23.5.67.1";
int index =0;
string ans;

while(index<add.size()){
    if(add[index]=='.'){
        ans = ans+"[.]";
    }
    else{
        ans = ans+add[index];
    }
    index++;
}

cout<<ans;

    return 0;
}