#include <iostream>
#include <array>
#include <vector>
using namespace std;
//array
int main(){

//     int arr[]={1,2,3};
//     array<int,4>a={1,2,3,4};
//     int size = a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<"   "<<a.at(i)<<"\n";
//     }
//   for(int i:a){
//     cout<<i<< " ";
//    }
// cout<<"is a empty--->"<<a.empty()<<"\n";
// cout<<a.front()<<"\n";
// cout<<a.back()<<"\n";



//vectors
vector<int>v;
vector<int>a(5,1);
cout<<"this is a  ";
for(int i:a){
    cout<<i<<"  ";
}
vector<int>vec(a);
cout<<"\nthis is vec  ";
for(int i:vec){
    cout<<i<<"  ";
}
cout<<"\n"<<v.capacity()<<"\n";
v.push_back(1);
cout<<v.capacity()<<"\n";
v.push_back(2);
cout<<v.capacity()<<"\n";
v.push_back(3);
cout<<v.capacity()<<"\n";
cout<<v.size();
cout<<"\nelement at 2 is "<<v.at(2);
cout<<"\nat front "<<v.front();
cout<<"\nat back "<<v.back()<<endl;
for(int i:v){
    cout<<i<<"  ";

}
v.pop_back();
cout<<"\nafter pop\n";
for(int i:v){
    cout<<i<<"  ";

}
cout<<"\nsize befor clear"<<v.size();
v.clear();
cout<<"\nsize after clear"<<v.size();


    


}