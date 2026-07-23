#include<bits/stdc++.h>
using namespace std;
class st{
    int t=-1;
    int s[10];
    public:
    void push(int x){
        if(t<9){
            t=t+1;
            s[t]=x;
        }
    }
    void pop(){
        if(t>-1){
            t=t-1;
        }
    }
    int top(){
        return s[t];
    }
};
int main(){
    st s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(6);
   cout<<s.top()<<endl;;
   s.pop();
   s.pop();
   cout<<s.top();
}