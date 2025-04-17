#include<iostream>
using namespace std;

void wave(int a[][3],int n,int m){
    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=0; i<n; i++){
              cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=n-1; i>=0; i--){
               cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}


int main(){

int arr[3][3] = {1,2,3,4,5,6,7,8,9};
for(int j=0; j<3; j++){
    for(int i=0; i<3; i++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

cout<<"wave form"<<endl;

wave(arr,3,3);

    return 0;
}