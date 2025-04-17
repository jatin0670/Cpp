#include<iostream>
using namespace std;

int main(){

int arr[] = {3,7,6,4};
int x,y;
int target = 9;
x=0;
y=0;

for(int i=0; i<3; i++){
  for(int j=i+1; j<4; j++){
    if(arr[i]+arr[j]==target){
      x=i;
      y=j;
    }
  }
}

cout<<x<<" "<<y;

 return 0;
}