#include<iostream>
using namespace std;
int main(){

int arr[4][3] = {1,2,3,8,7,6,12,55,88,87,44,22};
int target = 12;

for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        if(arr[i][j]==target){
        cout<<"found";
        return 0;
        }
    }
}

cout<<"not found";

    return 0;
}