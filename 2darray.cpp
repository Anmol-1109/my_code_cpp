#include <iostream>
using namespace std;
bool ispresent(int arr[][3],int rows , int columns,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]==key){
                return 1;
                break;
            }
            else{
                continue;
            }

        }
        return 0;
    }

}
int main(){
    int arr[2][3]={{3,3,3},{2,2,2}};
     for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<' ';
        }cout<<endl;
    }
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"enter "<<i<<' '<<j<<" element ";
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<' ';
        }cout<<endl;
    }
    int key;
cout <<"enter key ";
cin>>key;
cout<<"is key present "<<ispresent(arr,2,3,key);

}