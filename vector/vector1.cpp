#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

                                            //  initialize and find size and capacity

vector<int> v;        

cout<<"size: "<<v.size()<<endl;             

cout<<"capacity: "<<v.capacity()<<endl;        

v.push_back(1);
v.push_back(4);
v.push_back(7);

cout<<"v size: "<<v.size()<<endl;
cout<<"v capacity: "<<v.capacity()<<endl;

// ---------------------------------------------------------------------------------------------------------

                                            //    second method    

vector<int> v1(5,1); 
cout<<"v1 size: "<<v1.size()<<endl;
cout<<"v1 capacity: "<<v1.capacity()<<endl;

for(int i=0; i<5; i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

v1.push_back(8);

cout<<"v1 size: "<<v1.size()<<endl;
cout<<"v1 capacity: "<<v1.capacity()<<endl;

for(int i=0; i<6; i++){
    cout<<v1[i]<<" ";
}

// ---------------------------------------------------------------------------------------------------------------

                                        //   third mathod

vector<int> v3 = {1,2,3,4,5};                 

for(int i=0; i<5; i++){
    cout<<v3[i]<<" ";
}

cout<<endl;

cout<<"v3 size: "<<v3.size()<<endl;
cout<<"v3 capacity: "<<v3.capacity()<<endl;

// -------------------------------------------------------------------------------------------------------------------

                                    //  pop(), erase(), insert()

vector<int> vnew;

vnew.push_back(1);
vnew.push_back(3);
vnew.push_back(8);
vnew.push_back(5);
vnew.push_back(9);

cout<<"vnew size: "<<vnew.size()<<endl;
cout<<"vnew capacity: "<<vnew.capacity()<<endl;


cout<<"after pop-----------------------"<<endl;

vnew.pop_back();

cout<<"vnew size: "<<vnew.size()<<endl;
cout<<"vnew capacity: "<<vnew.capacity()<<endl;

cout<<"after erase---------------------"<<endl;

vnew.erase(vnew.begin()+2);                           //erase third element from starting

cout<<"vnew size: "<<vnew.size()<<endl;
cout<<"vnew capacity: "<<vnew.capacity()<<endl;

vnew.insert(vnew.begin()+2,34);                         //insert element in perticular index


vnew.clear();                                              //remove all the elements 

// ------------------------------------------------------------------------------------------------------------------------

                                            //    print first or last element


vector<int> h;

h.push_back(2);
h.push_back(6);
h.push_back(4);
h.push_back(8);
h.push_back(9);

cout<<h[0]<<endl;
cout<<h.front()<<endl;

cout<<h[h.size()-1]<<endl;
cout<<h.back()<<endl;

// -----------------------------------------------------------------------------------------------------------------------

                                        //   sort()

vector<int> hell;

hell.push_back(18);
hell.push_back(12);
hell.push_back(41);
hell.push_back(33);
hell.push_back(23);

for(int i=0; i<5; i++){
    cout<<hell[i]<<" ";
}
cout<<endl;

cout<<"sorted-------------"<<endl;
// increasing order-------------------------------
sort(hell.begin(),hell.end());

for(int i=0; i<5; i++){
    cout<<hell[i]<<" ";
} 

// decreasing order --------------------

sort(hell.begin(), hell.end(), greater<int>());
sort(hell.rbegin(), hell.rend());                   //another way

for(int i=0; i<5; i++){
    cout<<hell[i]<<" ";
} 

                                                        //  binary search

cout<<binary_search(hell.begin(), hell.end(),41);


    return 0;
}