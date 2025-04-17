#include<iostream>
using namespace std;
int main(){

int n = 7;
int arr[] = {4,3,2,1,2,7,6};

for(int i=0; i<n; i++){
    arr[i]--;
}

for(int i=0; i<n; i++){
    arr[arr[i]%n]+=n;
}

for(int i=0; i<n; i++){
    if(arr[i]/n==0){
        cout<<"missing number: "<<i+1;
        break;
    }
}
cout<<endl;

for(int i=0; i<n; i++){
    if(arr[i]/n==2){
        cout<<"repeated number: "<<i+1;
        break;
    }
}
    return 0;
}