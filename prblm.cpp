#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter your no ";
    cin>>n;
    int count=0;
   while(n!=0){
       n=n>>1;
       count++;
}
int mask=0;
for(int i=0;i<count;i++){
    mask=mask+pow(2,i);
}
cout<<mask<<'\n';
n=((~n)&mask);
cout<<"complement is "<<n;
}