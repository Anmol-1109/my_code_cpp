#include <iostream>
using namespace std;
void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void reverse(int array[],int size){
    int temp1,temp2;
   int k=size/2;
   for(int i=0;i<k;i++){
    temp1=array[i];
    array[i]=array[size-i-1];
    array[size-i-1]=temp1;
   }
}
int main(){
int array1[]={1,2,3,4,5,6,7,8,9,10};
int size1=sizeof(array1)/sizeof(array1[1]);
print(array1,size1);
reverse(array1,size1);
print(array1,size1);
int array2[]={11,12,13,14,15,16,17,18,19};
int size2=sizeof(array2)/sizeof(array2[2]);
print(array2,size2);
reverse(array2,size2);
print(array2,size2);
}