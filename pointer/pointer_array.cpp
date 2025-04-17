#include<iostream>
using namespace std;
int main(){

int arr[5] = {1,2,3,4,5}; //arr contain the add of first element
int *ptr = arr;


//print the add of first value or 0 index
cout<<arr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;
cout<<ptr<<endl;
cout<<"------------------------"<<endl;

//print the add of second value or 1 index
cout<<arr+1<<endl;
cout<<&arr[1]<<endl;
cout<<"------------------------"<<endl;

//print the value of 0 index
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*(arr+0)<<endl;
cout<<*ptr<<endl;
cout<<"------------------------"<<endl;

//print the all the addresses
for(int i=0; i<5; i++){
    cout<<arr+i<<endl;
}
cout<<"------------------------"<<endl;

//print the all the addresses
for(int i=0; i<5; i++){
    cout<<*(arr+i)<<endl;
}
cout<<"------------------------"<<endl;

//print the all the addresses with the help of pointer

for(int i=0; i<5; i++){
    cout<<ptr+i<<endl;
}
cout<<"------------------------"<<endl;

// print all the values with the help of pointer

for(int i=0; i<5; i++){
    cout<<ptr[i]<<endl;
}
cout<<"------------------------"<<endl;

//print the the values with the help of arithmetic ptr 

for(int i=0; i<5; i++){
    cout<<*ptr<<endl;
    ptr++;
}
cout<<"------------------------"<<endl;

//print all the values in reverse order

int arr1[5] = {1,2,3,4,5};
int *ptr1 = &arr1[4];
for(int i=5; i>0; i--){
    cout<<*ptr1<<endl;
    ptr1--;
}

    return 0;
}