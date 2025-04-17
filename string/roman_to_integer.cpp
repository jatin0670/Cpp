#include<iostream>
using namespace std;

int rti(char c){
  if(c=='I'){
    return 1;
  }
  else if(c=='V'){
    return 5;
  }
  else if(c=='X'){
   return 10;
  }
  else if(c=='L'){
    return 50;
  }
  else if(c=='C'){
    return 100;
  }
  else if(c=='O'){
  return 500;
  }
  else{
    return 1000;
  }
}

int main(){

string s = "XXX";
int sum = 0;
int index = 0;

while(index<s.size()-1){
  if(rti(s[index])<rti(s[index+1])){
    sum-=rti(s[index]);
  }
  else{
    sum+=rti(s[index]);
  }
  index++;
}

sum+= rti(s[s.size()-1]); 
cout<<sum;


  return 0;
}