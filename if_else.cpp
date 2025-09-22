#include <iostream>
using namespace std;
int main(){
    /*int n1;
    int n2;
    cout<<"enter first no ";
    cin>>n1;
    cout<<"enter second no ";
    cin>>n2;
    if(n1>n2){
    cout<< n1<< " is greater";}
     else if(n2>n1){
        cout<< n2<< " is greater";
    }
    else{
        cout<<"both are equal";
    }*/
   char ch='9';
   bool ch2=isupper(ch);
   bool k= isdigit(ch);
   if(ch2){
    cout<<"upper case letter";
   }
   else if(k){
    cout<<"is number";
    
   }
   else{
   cout<<"lower";
   }
}