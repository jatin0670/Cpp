#include<iostream>
using namespace std;
int main(){

int L,B,H;
cout<<"Enter L B H values: ";
cin>>L>>B>>H;

int ***ptr = new int  **[L];

//now we'll create a 2d array

for(int i=0; i<L; i++){
    ptr[i] = new int *[B];
    for(int j=0; j<B; j++){
        ptr[i][j] = new int[H];
    }
}

cout<<"this is the 3d array"<<endl;
for(int i=0; i<L; i++){
    for(int j=0; j<B; j++){
        for(int k=0; k<H; k++){
            ptr[i][j][k] = i+j+k;
        }
    }
}

for(int i=0; i<L; i++){
    for(int j=0; j<B; j++){
        for(int k=0; k<H; k++){
            cout<<ptr[i][j][k];
        }
        cout<<endl;
    }
    cout<<endl;
}

//deletation part

for(int i=0; i<L; i++){
    for(int j=0; j<B; j++){
            delete[] ptr[i][j];
    }
    delete[] ptr[i];
}


delete[] ptr;
    return 0;
}