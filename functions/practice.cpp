#include<iostream>
using namespace std;

int fact(int a){
int ans = 1;
for(int i=1; i<=a; i++){
   ans*=i;
}
return ans;
}

int main(){

cout<<fact(5);

   return 0;
}