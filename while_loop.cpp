#include<iostream>
using namespace std;
int main(){
/*int i=1;
int sum=0;
while(i<10){
    cout<<i<<"\n";
   
    sum=sum+i;
     i++;
}
cout<<sum;}*/




//       patern 1 
/*int n;
int m;
cout<<"enter rows";
cin>>n;
cout<<"enter columns";
cin>>m;
int i=1;
while(i<=n){
    int j=1;
    while(j<=m){
        cout<<"# ";
        j=j+1;
    }
    cout<<"\n";
    i=i+1;
}*/



//                 patern 2
/*int rows=4;
int columns=4;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++){
        cout<<j;
    }cout<<"\n";
}*/



//        pattern 3
/*int rows=3;
int columns=3;
for(int j=1;j<=9;j++){
        cout<<j;
    if(j%3==0){
    cout<<"\n";}

}}*/



//           pattern 4
/*for(int i=1;i<=10;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";}*/




 //           pattern 5 
 /*int count=0;
 for(int i=1;i<=4;i++){
     for(int j=i;j<=i+count;j++){
        cout<<j;
        ;
     }
     cout<<"\n";
count++;
 } */





 //               pattern 6
 /*for (int i=1;i<=5;i++){
    for(int j=i;j>0;j--){
        cout<<j<<" ";
    }
    cout<<"\n";
 }*/




 //              pattern 7
  /*int a =65;//ascii value of A//
 
 for (int i=1;i<=3;i++){
char c=a;
for(int j=1;j<=3;j++){
    cout<<c;
}
a++;
cout<<'\n';
 }*/



 //         pattern 8
 //ascii value of A//
 
 /*for (int i=1;i<=3;i++){
int a =65;

for(int j=1;j<=3;j++){
    char c=a;
    cout<<c;
    a++;
}

cout<<'\n';
}*/





//              pattern 9
int a =65;
for (int i=1;i<=3;i++){


for(int j=1;j<=3;j++){
    char c=a;
    cout<<c;
    a++;
}

cout<<'\n';
}

}