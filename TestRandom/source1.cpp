#include <iostream>
#include <random>

//�����_���Ȓl��͈͂��w�肵�Đ�������B
//����́A�T�C�R���̖ڂ�z�肵��1�`6�͈̔͂ŗ����𐶐��B

int main(){
    std::cout << "�e�X�g" << std::endl;
    std::mt19937 engine{ std::random_device{}() };
    std::uniform_int_distribution<int> dist(1, 6);
    //�\��
    int index = dist(engine);
    std::cout << "index:" << index << std::endl;
    //20�񃋁[�v
    for (int i = 0; i < 20; i++){
        std::cout << "i = " << i << ", dist(engine) = " << dist(engine) << std::endl;
    }
    return (0);
}