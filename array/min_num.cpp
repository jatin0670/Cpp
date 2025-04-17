#include<iostream>
using namespace std;

int main(){

    int arr[] = {4,6,2,7,1};
    int ans = arr[0];

    for(int i=1; i<5; i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<ans;
}