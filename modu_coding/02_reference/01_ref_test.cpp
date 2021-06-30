#include<iostream>

int change_val (int &p) {
    p=3;
    return 0;

}

int main () {
    int number =5;
    std::cout<< number <<std::endl;
    change_val(number);     // 포인터와 달리 number 앞에 & 가 붙지 않는다!
    std::cout<< number <<std::endl;
}



// change val 함수의 인자로  참조자를 받게 함 
// 원래 int &p; 와 같이 단독으로 선언할때는 사용이 불가하지만
// 참조자가 호출되는 시점이 int number=5 이후에 나오므로
// int &p = number 가 되는것과  같으므로 오류가 발생하지 않음.