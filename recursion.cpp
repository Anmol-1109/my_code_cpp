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
int subseqk(int arr[],int size,vector<int>&v,int n,int sum,int i){
    if(i==size)return sum;
    if(sum==n)print(v);
    sum=sum+=arr[i];
    v.push_back(arr[i]);
    sum=subseqk(arr,size,v,n,sum,i+1);
    sum-=arr[i];
    v.pop_back();
    sum=subseqk(arr,size,v,n,sum,i+1);
    return sum;
}
int main(){
    //cout<<fibo(6);
    //cout<<sum(3);
    int arr[]={1,2,3,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    vector<int>v;
    subseqk(arr,size,v,15,0,0);

}