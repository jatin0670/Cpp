#include<iostream>
using namespace std;

char con(char name){
   char ans = name - 'a' + 'A';
   return ans;
}


int main(){


char name;
cout<<"Enter small letter: ";
cin>>name;
cout<<con(name);

   return 0;
}