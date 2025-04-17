#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string num1 = "26845";
string num2 = "938";

int index1 = num1.size()-1;
int index2 = num2.size()-1;
int carry = 0;
int sum = 0;
string ans;

while(index2>=0){
  sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
  carry = sum/10;
  char c = '0' + sum%10;
  ans+= c;
  index1--; index2--; 
}

while(index1>=0){
    sum = (num1[index1] -'0') + carry;
    carry = sum/10;
    char c = '0' + sum%10;
    ans+= c;
    index1--;
}

reverse(ans.begin(), ans.end());

cout<<ans;

   return 0;
}