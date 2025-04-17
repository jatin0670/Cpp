#include<iostream>
using namespace std;

int main(){

    // if else ---------------------------------

// int age;
// cout<<"Enter your age: ";
// cin>>age;

// if(age>=18){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }

//if esle if --------------------------------------

// int marks;
// cout<<"enter your marks: ";
// cin>>marks;

// if(marks>100){
//     cout<<"enter again";
// }
// else if(marks>=80){
//     cout<<"very good";
// }
// else if(marks>=50){
//     cout<<"good";
// }
// else if(marks>=20){
//     cout<<"not good";
// }

// else{
//     cout<<"fail";
// }

// nested if else ----------------------------------

int marks, att;
cout<<"Enter your marks: ";
cin>>marks;


if(marks>=33){

    cout<<"Enter your att: ";
    cin>>att;

    if(att>=50){
        cout<<"pass";
    }
    else{
        cout<<"your att is low";
    }
}
else{
    cout<<"fail";
}



    return 0;
}