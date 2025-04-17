#include<iostream>
using namespace std;

int main(){

int arr[] = {1,3,5,7,9};
int start = 0;
int end = 4;
int key = 5;
bool found = false;

while(start<=end){
    int mid = (start+end)/2;

    if(arr[mid]==key){
        cout<<mid;
        found = true;
        break;
    }
    else if(arr[mid]<key){
          start = mid + 1;
    }
   else{
    end = mid - 1;
   }
}

if(!found){
    cout<<"not found";
}


    return 0;
}