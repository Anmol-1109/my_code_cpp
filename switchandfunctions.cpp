#include <iostream>
using namespace std;
int main(){
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

}
}