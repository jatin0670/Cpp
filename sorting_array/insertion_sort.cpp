#include<iostream>
using namespace std;

int main(){

int arr[] = {4,3,1,2,5};

for(int i=1; i<4; i++){
    for(int j=i; j>0; j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }
    }
}

for(int i=0; i<5; i++){
    cout<<arr[i];
}


    return 0;
}