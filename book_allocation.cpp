#include<iostream>
using namespace std;
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
int main(){
int arr[]={0, 0, 10, 20};
int m=2;
int n=sizeof(arr)/sizeof(int);
cout<<findsol(arr,n,m);

}