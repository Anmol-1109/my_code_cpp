#include <iostream>
using namespace std;
int main(){
    int array[]={0,1,2,3,4,5,6,7,8,9};
    array[5]=98;
   // cout<<array[8]<<endl; 
    for (int i=0;i <sizeof(array)/sizeof(array[1]);i++){
    cout<<array[i]<<endl;}
}
