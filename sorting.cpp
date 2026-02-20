#include<iostream>
using namespace std;
#include <bits/stdc++.h>
void print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<"\n";
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]) 
        minindex=j;
    }
        
    swap(arr[i],arr[minindex]);
    }

    

}
void bubblesort(int arr[],int n){
    bool swapped = false;
      for(int i=0;i<n-1;i++){//int i=1;i<n;i++
        for(int j=0;j<n-i-1;j++){//int j=0;j<n-i;j++
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped =1;
            }

        }
     if(!swapped){
        break;
     }}

}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp =arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];

            }
            else{
                break;
            }
        }
arr[j+1]=temp;
    }
}
void merge(int arr[],int low, int mid ,int high){
    int i=low;
    int j=mid+1;
    vector<int>v;
    while(i<=mid&&j<=high){
        int temp=arr[i];
        if(arr[i]<arr[j]){
           v.emplace_back(arr[i++]);
        }
        else{
            v.emplace_back(arr[j]);
            j++;
        }

    }
    while(i<=mid){
        v.push_back(arr[i++]);
    }
    while(j<=high){
        v.push_back(arr[j++]);
    }
    
    for(int i:v){
        arr[low++]=i;
    }

}
void mergesort(int arr[],int low,int high){//devide and merge
    if(low==high)return;
    int mid = (low+high)/2;            
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);

}
int main(){
   int  arr[]={2,6,4,5,6,87,98,5,5,0};
    int n= sizeof(arr)/sizeof(int);
    print(arr,n);
   mergesort(arr,0,n-1);
   print(arr,n);

}