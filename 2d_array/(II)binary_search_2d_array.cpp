#include<iostream>
using namespace std;

int main(){

int arr[4][5] = {2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};
int target = 200;
bool found = false;
int start = 0;
int end = 19;

while(start<=end){
    int mid = (start+end)/2;
    int row_index = mid/5;
    int col_index = mid%5;

    if(arr[row_index][col_index]==target){
        cout<<"found";
        found = true;
        return 0;
    }
    else if(arr[row_index][col_index]<target){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
}

if(!found){
    cout<<"Not found";
}



    return 0;
}