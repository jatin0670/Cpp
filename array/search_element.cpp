#include<iostream>
using namespace std;

int main(){

int arr[] = {12,35,78,22,89};
int index = -1;
int key = 89;

for(int i=0; i<5; i++){
    if(arr[i]==key){
        index = i;
        break;
    }
}

cout<<index;

    return 0;
}