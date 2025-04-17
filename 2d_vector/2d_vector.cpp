#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

// vector<vector<int>>matrix(3,vector<int>(4,2));             //-------------------------- 

// for(int i=0; i<3; i++){
//     for(int j=0; j<4; j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
//-----------------------------------------------

//find rows and cols

// cout<<"rows = "<<matrix.size();
// cout<<endl;
// cout<<"cols = "<<matrix[0].size();
//------------------------------------------------


int n,m;
cout<<"Enter rows and cols = ";
cin>>n>>m;

vector<vector<int>>matrix(n,vector<int>(m));

cout<<"enter: ";
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>matrix[i][j];
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}