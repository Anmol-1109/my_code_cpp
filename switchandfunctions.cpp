#include <iostream>
using namespace std;
int power(int a,int b){
    int j=1;
    int n=1;
    while(j<=b){
        n=n*a;
        j++;
    }
    return n;
}
int main(){
    /*
    int n;
    cout<<"enter the no ";
    cin>>n;
    char ch ='A';
    switch(n){
    case 1 :
        cout<<"1\n";
        switch(ch){
            case 'A':
            cout<<"value of char is "<<ch;
        }
        break;
     
    case 2:
        cout<<"2";
        break;
    default:
    cout<<"enter a valid no";

}*/
int l=power(2,5);
cout<<l;
}