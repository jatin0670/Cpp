#include<iostream>
using namespace std;
int main(){

int arr[3][3] = {1,2,3,4,5,6,7,8,9};
int first = 0;
for(int i=0; i<3; i++){
    first+=arr[i][i];
}

int second = 0;
int i=0; 
int j=2;
while(j>=0){
    second+= arr[i][j];
    j--; i++;
}

cout<<first<<" "<<second;


    return 0;
}