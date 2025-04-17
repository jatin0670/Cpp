#include<iostream>
using namespace std;
int main(){

int arr1[3][4]={{2,3,4,6},{7,6,2,6},{5,3,1,6}};
int arr2[3][4]={{2,3,4,6},{7,6,2,6},{5,3,1,6}};
int arr3[3][4];

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}