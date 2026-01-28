#include <iostream>
#include <string>
using namespace std;
int len(char arr[]){
    int c=0;
    while(arr[c]!='\0'){
        c++;

    }return --c;
    }
void rev(char arr[]){
    int size = len(arr);
    for(int i=0;i<=size/2;i++){
        swap(arr[i],arr[size-1-i]);

    }

}   

int main(){
    // char name[50];
    // cout<<"enter your name ";
    // // cin >>name;
    // fgets(name,50,stdin);
    // cout<<"your name is "<<name;
    // // cout<<len(name);
    // // name[4]='\0';
    // // cout<<"your name is "<<name;
    // rev(name);
    // cout<<name;
    char arr[] = "anmol sharma\0";
    string name = "anmol sharma\0";
    cout<<arr<<endl;
        cout<<name<<endl;}


