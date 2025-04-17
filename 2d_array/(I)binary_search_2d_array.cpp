#include<iostream>
using namespace std;
int main(){


int arr[4][5] = {2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};
int x = 78;
bool found = false;

for(int i=0; i<4; i++){
    if(arr[i][0]<=x && arr[i][4]>=x){
        int start = 0; int end = 4;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[i][mid]==x){
                cout<<"found";
                found = true;
                return 0;
            }
            else if(arr[i][mid]<x){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
    }
}

if(!found){
    cout<<"not found";
}

    return 0; 
}   