#include <fstream>
#include <iostream>
#include <string>
#include <vector>

//�s���������Ă����Ȃ��ǂݍ��݂��o���邩�m�F����B
//win_sente.txt:24000�s
//win_gote.txt :17635�s
//�J���}�ŋ�؂�A�x�N�^�[�ɒǉ�����B

std::vector<std::string> split(std::string str) {
    std::string separator = ",";
    std::vector<std::string> result;
    std::string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    std::string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != std::string::npos; prev = (pos += sl)) {
        result.emplace_back(tstr, prev, pos - prev);
    }
    //std::cout << "result�T�C�Y�F" << result.size() << '\n';
    return result;
}

int main() {
    std::vector<std::vector<std::string>> sente_vector;
    std::vector<std::vector<std::string>> gote_vector;
    std::ifstream sente_file("win_sente.txt"); // �ǂݍ��ރt�@�C���̃p�X���w��
    std::ifstream gote_file("win_gote.txt");
    std::string sente_line;
    std::string gote_line;

    if (!sente_file) {
        //�G���[����
        std::cout << "�t�@�C�������݂��܂���B1" << std::endl;
    }
    else {
        //1�s���ǂݍ���
        while (std::getline(sente_file, sente_line)) {
            //std::cout << sente_line << std::endl;
            std::vector<std::string> temp_v = split(sente_line);
            //�x�N�^�[�ɒǉ�
            sente_vector.push_back(temp_v);
        }
        std::cout << "�x�N�^�[�T�C�Y1�F" << sente_vector.size() << std::endl;
    }

    if (!gote_file) {
        //�G���[����
        std::cout << "�t�@�C�������݂��܂���B1" << std::endl;
    }
    else {
        while (std::getline(gote_file, gote_line)) {
            //std::cout << gote_line << std::endl;
            std::vector<std::string> temp_v = split(gote_line);
            //�x�N�^�[�ɒǉ�
            gote_vector.push_back(temp_v);
        }
        std::cout << "�x�N�^�[�T�C�Y2�F" << gote_vector.size() << std::endl;
    }

    return (0);
}