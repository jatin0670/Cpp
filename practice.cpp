#include<iostream>
using namespace std;

void print(int n){
    if(n%2==1){
        n--;
    }
    if(n<2){
        return;
    }
    
    
    print(n-2);
    cout<<n<<endl;
}


int main(){

print(15);

    return 0;
}