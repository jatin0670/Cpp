#include<iostream>
using namespace std;

int main(){

int arr[] = {12,34,56,78,90};
int one, two, three;
one = two = three = INT_MIN;

for(int i=0; i<5; i++){
    if(arr[i]>one){
        three = two;
        two = one;
        one = arr[i];
    }
    else if(arr[i]>two){
        three = two;
        two = arr[i];
    }
    else if(arr[i]>three){
        three = arr[i];
    }
}

cout<<one<<" "<<two<<" "<<three;

    return 0;
}