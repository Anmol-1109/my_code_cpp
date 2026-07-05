#include <bits/stdc++.h>
using namespace std;
int  fibo(int n){
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);

}
void print(vector<int>v){
    for(int i:v)cout<<i<<' ';
    cout<<endl;
}
void printsub(int arr[],int i,vector<int>&v,int size){
    if(i==size){print(v);return ;}

v.push_back(arr[i]);
printsub(arr,i+1,v,size);
v.pop_back();
printsub(arr,i+1,v,size);

}
int sum(int n){
    if(n==0)return 0;
    else return n+sum(n-1);
}
void subseq(int arr[],int i,vector<int>&v,int sum,int n,int size){
    if(i==size){if(sum==n)print(v);
        return ;}
    sum=sum+arr[i];
    v.push_back(arr[i]);
    subseq(arr,i+1,v,sum,n,size);
    sum-=arr[i];
    v.pop_back();
    subseq(arr,i+1,v,sum,n,size);

}
int main(){
    //cout<<fibo(6);
    //cout<<sum(3);
    int arr[]={1,2,3,5};
    int size = sizeof(arr)/sizeof(int);
    vector<int>v;
    //printsub(arr,0,v,3);
    subseq(arr,0,v,0,10,size);

}