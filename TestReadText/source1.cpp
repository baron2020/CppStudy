#include <fstream>
#include <iostream>
#include <string>

//�ǂݍ��ݑΏۂ̃e�L�X�g���G���R�[�hUTF-8�ɕύX����iUTF-8(BOM�t��)���Ɨ]�v�ȕ����������ǉ����ꂽ���߁j
//test1.txt�F�ǂݍ��ݑΏۂ̃t�@�C���Bsorce1�t�@�C���Ɠ����f�B���N�g���Ɋi�[�����B

int main(){
    std::ifstream file("test1.txt");  // �ǂݍ��ރt�@�C���̃p�X���w��
    std::string line;

    std::cout << "�o�͊J�n" << std::endl;
    //�ŏI�_�ɒB����܂�
    while (file) { 
        file >> line; //file����line�Ƀf�[�^���i�[
        std::cout << line << std::endl; //line��\��
    }
    std::cout << "�o�͏I��" << std::endl;

    return (0);
}