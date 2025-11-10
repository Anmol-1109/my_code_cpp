#include <iostream>
using namespace std;
void update(int array[],int size){
    array[3]=999;
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
}
int main(){
    int arr[4]={2,6,4,5};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    update(arr,4);
    
for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    

}