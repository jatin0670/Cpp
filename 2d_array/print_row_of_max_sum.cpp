#include<iostream>
using namespace std;
int main(){

int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
int index = -1;
int max = INT_MIN;

for(int i=0; i<3; i++){
    int total = 0;
    for(int j=0;j<4; j++){
        total+=arr[i][j];
    }
    if(max<total){
        max = total;
        index = i;
    }
}

cout<<index;

    return 0;
}