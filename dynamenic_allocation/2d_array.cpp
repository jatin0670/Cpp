#include<iostream>
using namespace std;
int main(){

int n,m;
cout<<"values for row and colum: ";
cin>>n>>m;

int **ptr = new int *[n];

//created 2d array
for(int i=0; i<n; i++){
    ptr[i] = new int[m];
}

cout<<"Enter values:"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>ptr[i][j];
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<ptr[i][j]<<" ";
    }
    cout<<endl;
}

// release the memory in heap

for(int i=0; i<n; i++){
    delete[] ptr[i];
}

delete[] ptr;

    return 0;
}