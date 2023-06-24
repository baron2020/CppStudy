#include <fstream>
#include <iostream>
#include <string>
#include <vector>

//test1.txt�̒��g��ǂݍ��݁A�J���}�ŋ�؂�Avector�Ɋi�[����B
//�x�N�^�[�̑S�v�f��\��������B


std::vector<std::string> split(std::string str) {
    std::string separator = ",";
    std::vector<std::string> result;
    std::string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    std::string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != std::string::npos; prev = (pos += sl)) {
        result.emplace_back(tstr, prev, pos - prev);
    }
    std::cout << "result�T�C�Y�F" << result.size() << '\n';
    return result;
}

int main(){
    std::vector<std::vector<std::string>> all_v;

    std::ifstream file("test1.txt");  // �ǂݍ��ރt�@�C���̃p�X���w��
    std::string line;

    std::cout << "�o�͊J�n" << std::endl;
    //�ŏI�_�ɒB����܂�
    while (file) { 
        file >> line; //file����line�Ƀf�[�^���i�[
        std::cout << line << std::endl; //line��\��
        std::vector<std::string> temp_v = split(line);
        //all_v�̍Ō�ɒǉ�
        all_v.push_back(temp_v);
    }
    std::cout << "�o�͏I��" << std::endl;
    std::cout << "�x�N�^�[�T�C�Y�F" <<all_v.size() << std::endl;

    //size_t�F���̃I�u�W�F�N�g�̃T�C�Y��\������̂ɏ\���Ȑ��x�������Ƃ��ۏ؂���Ă���B
    for (size_t i = 0; i < all_v.size(); ++i) {
        for (size_t j = 0; j < all_v.size(); ++j) {
            std::cout << "[i]:" << i << " [j]:" << j << " :" << all_v[i][j] << std::endl;
        }
    }
    return (0);
}