#include <iostream>

 int main() {
     int x;
     int& y = x;
     int& z = y;

     x=1;
     std::cout<<"x : "<<x<<"  y ; "<<y<<"  z : "<<z<<std::endl;
     
     y=2;
     std::cout<<"x : "<<x<<"  y ; "<<y<<"  z : "<<z<<std::endl;
     
     z=3;
     std::cout<<"x : "<<x<<"  y ; "<<y<<"  z : "<<z<<std::endl;

 return 0;
 }

 //  int 형 변수 x를 선언 
 //   y 는 x의 참조자  
 //c++  에서는 참조자의 참조자를 만드는것이 금지되어있음
 // 따라서 int& z =y 의 의미는 z 는 y의 참조자 가 아닌 z 는 x의 참조자가 되는것
 //  고로 y,z 모두 x의 참조자가됨.
 