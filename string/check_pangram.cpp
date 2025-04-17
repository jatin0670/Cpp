#include<iostream>
#include<vector>
using namespace std;

int main(){

string sentence = "the quick brown fox jumps over the lazy dog";
bool yes = false;

vector<bool>alpha(26,0);
int index = 0;

for(int i=0; i<sentence.size(); i++){
    index = sentence[i]-'a';
    alpha[index] = 1;
}

for(int i=0; i<26; i++){
    if(alpha[i]==0){
        cout<<"not pangram";
        yes = true;
    }
}

if(!yes){
    cout<<"pangram";
}





    return 0;
}