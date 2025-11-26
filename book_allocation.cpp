#include<iostream>
using namespace std;
// book allocation;
bool issol(int arr[],int n,int m,int mid){
        int stcount=1;
        int pagesum=0;
        for(int  i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum=pagesum +arr[i];
        }
        else{
            stcount++;
            if(stcount>m||arr[i]>mid){
                return 0;
            }
            pagesum=arr[i];
        }
        }
        return true;
        }
int findsol(int arr[],int n,int m){
    if(m>n){
    return -1;
    }
       int s=0;
       int sum=0;
       for(int i=0;i<n;i++){
           sum=sum+arr[i];
       }
       int e=sum;
       int mid=s+(e-s)/2;
       int ans=e;
       while(s<=e){
             if(issol(arr,n,m,mid)){
               ans=mid;
               e=mid-1;
                }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
       }
return ans;
}
//tree cutting problem 
bool sol1(int arr[],int size,int req,int m){
    int wood=0;
    for(int i=0;i<size;i++){
        if((arr[i]-m)>0){
        wood=wood +arr[i]-m;}
       }
 if(wood>=req){
    return 1;
 }
 else{
    return 0;
 }
}
int ans1(int arr[],int size,int req ){
    int s=0;
    int e=0;
    int ans;
    for(int i=0;i<size;i++){
    e=max(e,arr[i]);
    }
    int m=s+(e-s)/2;
    while(e>=s){
        m=s+(e-s)/2;
        if(sol1(arr,size,req,m)){
            s=m+1;
            ans=m;
        }
        else{
            e=m-1;
        }
    }
    
return ans;
}
//chef and dish problem
bool sol2(int arr[],int n,int dishes,int m){
    //int count=1;
    int time=0;
    int dcount=0;
    int j=0;
    int i=1;
    while(i<=dishes){
        if((time+(i*arr[j]))<=m){
        time=time+(i)*arr[j];
        dcount++;
        i++;
        }
        else{
           // count++;
            j++;
            time=0;
            i=1;
            }
        if(j>=n){
            return 0;
        }
        if(dcount==dishes){
            return 1;
        }
        
        }
        
 return 0;}
int ans2(int arr[],int n,int dishes){
    int s=0;
    int e=100000;
    int m=s+(e-s)/2;
    int ans=e;
    while(e>=s){
        if(sol2(arr,n,dishes,m)){
            e=m-1;
            ans=m;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
return ans;
}
int main(){
int arr1[]={1};
int n1 = sizeof(arr1)/sizeof(int);
cout<<ans2(arr1,n1,4)<<"\n";
int arr[]={0, 0, 10, 20};
int m=2;
int n=sizeof(arr)/sizeof(int);
cout<<findsol(arr,n,m);

}