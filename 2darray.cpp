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
//     int arr[2][3]={{3,3,3},{2,2,2}};
//      for(int i =0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<' ';
//         }cout<<endl;
//     }
//     for(int i =0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<"enter "<<i<<' '<<j<<" element ";
//             cin>>arr[i][j];
//         }
//     }
//     for(int i =0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<' ';
//         }cout<<endl;
//     }
//     int key;
// cout <<"enter key ";
// cin>>key;
// cout<<"is key present "<<ispresent(arr,2,3,key);




//binary search in 2d array
int arr1[3][3]={{1,3,4},
                {6,8,9},
                {11,15,19}};
                
 int col=sizeof(arr1[0])/sizeof(int);
 int s= 0;
 int e=8;
 int k;
 int mid=(s+e)/2;
 cout<<"enter key for binary search ";
 cin>>k;
 bool flag=0;
 while(s<=e){
    mid=(s+e)/2;
    if(arr1[mid/col][mid%col]==k){
        cout<<"present "<<mid/col<<mid%col;
     flag=1;
     break;
    }
    else{
        if(arr1[mid/col][mid%col]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    
 }
 if(!flag){
    cout<<"absent";
 }
}
