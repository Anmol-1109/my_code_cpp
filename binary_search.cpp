#include <iostream>
using namespace std;
void print(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int search(int arr[],int size,int key){
int start=0;
int end=size-1;
int array[2]={-1,-1};

while(start<=end){
    int mid= (start+end)/2;
    if(arr[mid]==key){
        int k=mid;
        while(arr[mid]==key){
            mid--;
        }
        while(arr[k]==key){
            k++;
        }
        array[0]=mid+1;
        array[1]=k-1;
        
        print(array,2);
        break;
    }
    else if(arr[mid]<key){
        start=mid+1;

    }
    else if(arr[mid]>key){
        end=mid-1;

    }
    


}if(array[0]==-1){cout<<-1<<" ";
}}
int main(){
    int array1[]={1,3,6,7,9,11,13,14,20,21,34,34,34,34};
    int array2[]={1,4,5,6,7,8,9,11,13,13,15,16,19,25,25};

    int size1 =sizeof(array1)/sizeof(int);
    int size2 =sizeof(array2)/sizeof(int);
   search(array1,size1,35);
   search(array2,size2,25);
}
