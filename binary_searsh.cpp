#include <iostream>
using namespace std;
int search(int arr[],int size,int key){
int start=0;
int end=size-1;

while(start<=end){
    int mid= (start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start=mid+1;

    }
    else if(arr[mid]>key){
        end=mid-1;

    }
    
}
return -1;
}
int main(){
    int array1[]={1,3,6,7,9,11,13,14,20,21,34};
    int array2[]={1,4,5,6,7,8,9,11,13,13,15,16,19,25};

    int size1 =sizeof(array1)/sizeof(int);
    int size2 =sizeof(array2)/sizeof(int);
   cout<<search(array1,size1,34)<<" ";
   cout<<search(array2,size2,25);
}
