# include <bits/stdc++.h>
using namespace std;
struct node{//you may use class in place of struct it will still work the class is better to use in some places as it gives the benefits of oops
    int data;
    node* next;
    node(int data1,node* next1){
        data=data1;
        next=next1;

    }
    node(int data2){
        data = data2;
        next =NULL;
    }
};
struct dnode{
    int data;
    dnode* prev;
    dnode* next;
    dnode(dnode* prev1,int data1,dnode* next1){
        data = data1;
        prev = prev1;
        next= next1;
    }
    dnode(int data1){
        data= data1;
        prev=NULL;
        next=NULL;
    }
};
int main(){
    // node a=node(3,NULL);
    // node*b=&a;
    // node*c=new node(5,b);
    // cout<<b<<endl;
    // cout<<a.data<<endl;
    // cout<<b->data<<endl;
    // cout<<b->next<<endl;
    // cout<<c<<endl;
    // cout<<c->data<<endl;
    // cout<<c->next->data<<endl;
    // node*d=new node(6);
    // cout<<d->next<<endl;



    // //creating linked list;
    // int arr[]={2,3,4,5,6,76};
    // node* start=new node(arr[0]);
    // node*last=start;
    // for (int i=1;i<sizeof(arr)/sizeof(int);i++){
    //     last->next=new node(arr[i]);
    //     last= last->next;
    // }
    // node* a;
    // a=start;
    // while(a!=NULL){
    //     cout<<a->data<<" ";
    //     a=a->next;
    // }

    // //deletion
    // int del=5;
    // node*head=start;
    // while(head->next){
    //     if(head->next->data==del){
    //         node* temp=head->next;
    //         head->next=head->next->next;
    //         delete temp;
    //         break;
    //     }
    //     head= head->next;
    // }
    // cout<<"\nafter deletion\n";
    // a=start;
    // while(a!=NULL){
    //     cout<<a->data<<" ";
    //     a=a->next;
    // }





    // //insertion after 
    // int insert=4;
    // int insertval=5;
    // head=start;
    // while(head->data!=insert)head=head->next;
    // if(head->data==insert){node* temp=head->next;
    // head->next=new node(insertval,temp);}
    //  cout<<"\nafter insertion\n";
    // a=start;
    // while(a!=NULL){
    //     cout<<a->data<<" ";
    //     a=a->next;
    // }












    //doubly linked list
    int arr[]={2,3,4,5,6,76};
    dnode* start= new dnode(arr[0]);
    dnode* temp=start;
    for(int i=1;i<6;i++){
        temp->next=new dnode(temp,arr[i],NULL);
        temp=temp->next;
    }
    temp= start;
    while(temp->next){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;

}