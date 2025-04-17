#include<iostream>
using namespace std;
int main(){

char arr[5] = "1234";
char *ptr = arr;

//print the add of first element
cout<<arr<<endl;
cout<<ptr<<endl;      //but it dont print add, but all values (like char or string does)

cout<<"----------------------"<<endl;

//to print the add we use type casting (void*);
cout<<(void*)arr<<endl;
cout<<(void*)ptr<<endl;
cout<<static_cast<void*>(arr)<<endl;

cout<<"----------------------"<<endl;

char name = 'a';
char *ptr1 = &name;
cout<<(void*)&name<<endl;
cout<<(void*)ptr1<<endl;

    return 0;
}