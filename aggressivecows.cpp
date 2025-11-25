#include <iostream>
using namespace std;
bool issol(int arr[],int n,int m,int cows){
int count=1;
int last=arr[0];

    for(int i=1;i<n;i++){
        
        if((arr[i]-last)>=m){
            last=arr[i];
            count++;
        }
        if(count==cows)break;
    }
    if(count<cows){
        return 0;
    }
    else{
        return 1;
    }


}
int sol(int arr[],int n,int cows){
int s=0;
int e=arr[n-1]-arr[0];
int m=s+(e-s)/2;
int ans=0;
   while(e>=s){
     m=s+(e-s)/2;
     if(issol(arr,n,m,cows)){
          ans=m;
          s=m+1;
    }
     else{
          e=m-1;
      }
   }
return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    cout<<sol(arr,size,3);
}