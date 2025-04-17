#include<iostream>
using namespace std;
int main(){

// int arr[3][3] = {{1,2,3},{4,5,6},{8,9,3}};  we can also initialize like this

// int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
// for(int i=0; i<4; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// ----------------------------user input

int row;
int col;

cout<<"Enter row: ";
cin>>row;

cout<<"Enter col: ";
cin>>col;

int arr[row][col];

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}