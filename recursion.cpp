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
printsub(arr,i+1,v,size);
v.push_back(arr[i]);
printsub(arr,i+1,v,size);
v.pop_back();

}
int sum(int n){
    if(n==0)return 0;
    else return n+sum(n-1);
}
int main(){
    //cout<<fibo(6);
    //cout<<sum(3);
    int arr[]={1,2,3};
    vector<int>v;
    printsub(arr,0,v,3);

}