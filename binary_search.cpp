
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
    if(e==s){
        return s;
    }
    

else{
return 0;
}}
int searchp(int arr[],int size,int k){
   int s=0;
   int e=size-1;
   int mid=s+(e-s)/2;
   int p=pivot(arr,size);
   
    if(k>arr[p]&&(k<=arr[size-1])){
        s=p;
    while(s<=e){
    mid=s+(e-s)/2;
                if(arr[mid]>=k){
                    e=mid;
                }
            else{
                s=mid+1;
            } 
if(arr[s]==k){
    return s;
}}
}
if(k>arr[0]){
    e=p-1;
    while(s<=e){
    mid=s+(e-s)/2;
    if(arr[mid]>=k){
e=mid;
    }
    else{
        s=mid+1;
    }

    }}

if(arr[s]==k){
    return s;
}
else{
    return -1;
}}
int main(){
    int arr[]={7,8,9,1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<searchp(arr,size,7);
}
