#include<iostream>
using namespace std;

void inc_by_value(int n){            //call by value
   n++;
}

void inc_by_ref(int &n){            //call by reference
   n++;
}

int main(){

int a=5;
inc_by_value(a);
cout<<a<<endl;

inc_by_ref(a);
cout<<a<<endl;
    return 0;
}