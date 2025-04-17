#include<iostream>
using namespace std;

int main(){

int arr[5][5] = {4,8,15,25,60,18,22,26,42,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170};
int target = 80;
bool found = false;

int i=0; int j=4;
 while(i<5 && j>=0){
    if(arr[i][j]==target){
        cout<<"Found";
        found = true;
        return 0;
    }
    else if(arr[i][j]<target){
        i++;
    }
    else{
        j--;
    }
 }

 if(!found){
    cout<<"Not found";
 }

    return 0;
}