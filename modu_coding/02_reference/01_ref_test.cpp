#include<iostream>

int change_val (int &p) {
    p=3;
    return 0;

}

int main () {
    int number =5;
    std::cout<< number <<std::endl;
    change_val(number);     // �����Ϳ� �޸� number �տ� & �� ���� �ʴ´�!
    std::cout<< number <<std::endl;
}



// change val �Լ��� ���ڷ�  �����ڸ� �ް� �� 
// ���� int &p; �� ���� �ܵ����� �����Ҷ��� ����� �Ұ�������
// �����ڰ� ȣ��Ǵ� ������ int number=5 ���Ŀ� �����Ƿ�
// int &p = number �� �Ǵ°Ͱ�  �����Ƿ� ������ �߻����� ����.