#include <iostream>
#include<vector>
using namespace std;
void print( int array[],int size){
     for (int i=0;i <size;i++){
    cout<<array[i]<<endl;}
}

int main(){
    int array2[4]={1,5,6,7};
    int array[]={0,1,2,3,4,5,6,7,8,9};
    array[5]=98;
   // cout<<array[8]<<endl;
   int size = sizeof(array)/sizeof(array[0]);
    //print(array,size);
    print(array2,4);
    vector<int>a(10,6);
} 
