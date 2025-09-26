#include <iostream>
using namespace std;
int main(){
//               bit wise               //
int a=4;
int b=6;
//           and//
cout<<"a&b "<<(a&b);
//           or//
cout<<"\na|b "<<(a|b);
//           nor//
cout<<"\n~a "<<~a;
//           xor//
cout<<"\na^b "<<(a^b);




//              left shift//
int y=3;
y= y<<2;
cout<<'\n'<<y;//chote no ke case me ek left shift 2 se multiply karta hai (exception tab aata hai jab positive no shift ki vjh se neaitve ho jaye//
int z=5;
z= z>>2;
cout<<'\n'<<z;//divide by 2//
}

