#include<iostream>
using namespace std;

void printarr(int a[][4], int row, int col){              //we have to mention col in function
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
int arr[3][4] = {1,2,3,4,5,6,7,8,9,4,3,6};

printarr(arr,3,4);


    return 0;
}