# include <bits/stdc++.h>;
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1,node* next1){
        data=data1;
        next=next1;

    }
};
int main(){
    node a=node(3,NULL);
    node*b=&a;
    node*c=new node(5,b);
    cout<<b<<endl;
    cout<<b->data<<endl;
    cout<<b->next;
    cout<<c<<endl;
    cout<<c->data<<endl;
    cout<<c->next->data<<endl;

}