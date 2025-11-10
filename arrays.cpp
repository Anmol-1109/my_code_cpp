#include <iostream>
using namespace std;
void print(int array[]){
    int size;
   size = sizeof(array)/sizeof(array[0]);
     for (int i=0;i <size;i++){
    cout<<array[i]<<endl;}
}

int main(){
    int array[]={0,1,2,3,4,5,6,7,8,9};
    array[5]=98;
   // cout<<array[8]<<endl; 
    print(array);
}
