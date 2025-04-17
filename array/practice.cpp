#include<iostream>
using namespace std;

int main(){

int arr[] = {7,9,1,8,4,3,2};
int target = 5;
int a=-1;
int b=-1;

for(int i=0; i<5; i++){
  for(int j=1; j<5; j++){
    if(arr[i]+arr[j]==target){
      a=j;
      b=i;
    }
  }
}

cout<<a<<" "<<b;





  return 0;
}