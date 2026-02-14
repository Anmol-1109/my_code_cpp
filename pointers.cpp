#include <iostream>
using  namespace std;
int func(int a){
    a= a+1;
}
int func1(int *a){
    *a= *a +1;
    a= a+1;
}
int main (){
    int a= 6;
    int *ptr= &a;
    // cout <<a<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    // func(a);
    // cout <<a<<endl;
    // func1(ptr);
    // cout <<a<<endl;
    // int *p=0;
    // //p=&a;
    // p=ptr;
    // cout<<*p<<endl;
    // int **x=&p;
    // cout<<*x<<endl;
    // cout<<**x<<endl;
    // p++;//pointer me increment karne utne values add hote jitna sapce us pointer ka data type leta hai jaise is case me 4;
    // cout<<p<<endl;
    // int arr[10]={1,23,15,43,67,87};
    // cout<<"adress of first element"<<arr<<endl;
    // cout<<"adress of first element"<<&arr[0]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<3[arr]<<endl;
    // char ch[6]="anmol";
    // cout<<arr<<endl;
    // cout<<ch<<endl;
    // char* point= &ch[0];
    // cout<<point<<endl;
    // char* point1= &ch[1];
    // cout<<point1<<endl;


    int oo=10;
     //double pointers
     typedef int* pointer;
     pointer k =&oo;
     cout<<*k<<endl;
     pointer* kk= &k;
     cout<<*kk<<endl;
     func1(k);
     cout<<*k<<endl;
     cout<<k;

     






}

