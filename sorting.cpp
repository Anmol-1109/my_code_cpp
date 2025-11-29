#include <iostream>
using namespace std;
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
int main(){
   int  arr[]={2,6,4,5,6,87,98,5,5,0};
    int n= sizeof(arr)/sizeof(int);
    print(arr,n);
    bubblesort(arr,n);
    print(arr,n);

}