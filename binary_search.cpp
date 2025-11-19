#include<iostream>
using namespace std;
int pivot(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+((e-s)/2);
while(s<e){
    int mid=s+((e-s)/2);
    if(arr[mid]>=arr[0] ){
        s=mid+1;
    }
   else{
        e=mid;
        }}
        return s;
    



}

int main(){
    int arr[]={7,8,9,1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<pivot(arr,size);
}