#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

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
// vector<int>v;
// vector<int>a(5,1);
// cout<<"this is a  ";
// for(int i:a){
//     cout<<i<<"  ";
// }
// vector<int>vec(a);
// cout<<"\nthis is vec  ";
// for(int i:vec){
//     cout<<i<<"  ";
// }
// cout<<"\n"<<v.capacity()<<"\n";
// v.push_back(1);
// cout<<v.capacity()<<"\n";
// v.push_back(2);
// cout<<v.capacity()<<"\n";
// v.push_back(3);
// cout<<v.capacity()<<"\n";
// cout<<v.size();
// cout<<"\nelement at 2 is "<<v.at(2);
// cout<<"\nat front "<<v.front();
// cout<<"\nat back "<<v.back()<<endl;
// for(int i:v){
//     cout<<i<<"  ";

// }
// v.pop_back();
// cout<<"\nafter pop\n";
// for(int i:v){
//     cout<<i<<"  ";

// }
// cout<<"\nsize befor clear"<<v.size();
// v.clear();
// cout<<"\nsize after clear"<<v.size();


    

//doube ended que or deck or deque
// deque<int>a;
// a.push_front(2);
// a.push_back(1);
// for(int i :a){
//     cout <<i<< " ";

// }
// a.pop_front();
// cout<<"\nafter front pop\n";
// for(int i :a){
//     cout <<i<< " ";

// }
// for(int i=1;i<11;i++){
//     a.push_back(i);

// }
// cout<<"\nafter loop\n";
// for(int i :a){
//     cout <<i<< " ";

// }
// cout<<"\nis a empty ---->"<<a.empty();
// a.erase(a.begin(),a.end()-4);
// cout<<"\nafter erase\n";
// for(int i :a){
//     cout <<i<< " ";

// }   









//list
// list<int>l;
// l.push_back(1);
// l.push_front(3);
// list<int>ll(5,100);
// for(int i :l){
// cout<<i<<" ";
// };
// cout<<endl;
// for(int i :ll){
// cout<<i<<" ";
// };
// cout<<endl;
// cout<<l.size()<<endl;
// cout<<ll.size()<<endl;






//stack
// stack<string>s;
// s.push("anmol");
// s.push("sharma");
// s.push("from");
// s.push("meerut");
// cout<<s.top();cout<<endl;
// cout<<s.size();cout<<endl;
// s.pop();
// cout<<s.top();cout<<endl;
// cout<<s.size();cout<<endl;
// cout<<s.empty();





//queue
queue<string>s;
s.push("anmol");
s.push("sharma");
s.push("from");
s.push("meerut");
cout<<s.front()<<endl;
cout<<s.size()<<endl;
s.pop();
cout<<s.front()<<endl;;
cout<<s.size()<<endl;;













}