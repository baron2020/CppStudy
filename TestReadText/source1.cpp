#include <fstream>
#include <iostream>
#include <string>

//�ǂݍ��ݑΏۂ̃e�L�X�g���G���R�[�hUTF-8�ɕύX����B�iUTF-8(BOM�t��)���Ɨ]�v�ȕ����������ǉ����ꂽ���߁j
//test1.txt�́A�ǂݍ��ݑΏۂ̃t�@�C���Bsorce1�t�@�C���Ɠ����f�B���N�g���Ɋi�[�����B
//�ŏ���if���ŁA�ǂݍ��ݑΏۃt�@�C�������݂��邩�m�F�����Ă���B

int main() {
    std::ifstream file("test1.txt");  // �ǂݍ��ރt�@�C���̃p�X���w��
    std::string line;
    
    if (!file) {
        //�G���[����
        std::cout << "�t�@�C�������݂��܂���B" << std::endl;
    }
    else {
        std::cout << "�o�͊J�n" << std::endl;
        //1�s���ǂݍ���
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        std::cout << "�o�͏I��" << std::endl;
    }

    return (0);
}