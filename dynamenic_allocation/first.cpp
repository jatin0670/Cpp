#include<iostream>
using namespace std;

int main(){

//dynamic allo for int
int *ptr = new int;
*ptr = 5;
cout<<*ptr<<" - interger"<<endl;

//dynamic allo for float
float *fptr = new float;
*fptr = 3.44;
cout<<*fptr<<" - float"<<endl;

// dynamic allo for array

int n;
cout<<"Enter array size: ";
cin>>n;
int *arr = new int[n];

for(int i=0; i<n; i++){
    arr[i] = i+1;
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

//we have to delete all the memory every time when we use heap storage

delete ptr;
delete fptr;
delete[] arr;

    return 0;
}