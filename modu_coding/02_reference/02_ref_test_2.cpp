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

 //  int �� ���� x�� ���� 
 //   y �� x�� ������  
 //c++  ������ �������� �����ڸ� ����°��� �����Ǿ�����
 // ���� int& z =y �� �ǹ̴� z �� y�� ������ �� �ƴ� z �� x�� �����ڰ� �Ǵ°�
 //  ��� y,z ��� x�� �����ڰ���.
 