#include <vector>
#include <iostream>

//std::vector�̎g����
//�v�f�̒ǉ��A�����̗v�f�폜�A�v�f�̕\��

int main(void) {
    std::vector<int> v;
    std::cout << "v�̃T�C�Y�́A" << v.size() << '\n'; // v�̗v�f����\��
    v.push_back(123);
    v.push_back(863);
    v.push_back(555);
    v.push_back(241);
    v.push_back(385);
    std::cout << "v�̃T�C�Y�́A" << v.size() << '\n'; // v�̗v�f����\��

    //�����̗v�f����菜���ɂ́Apop_back�֐����g���܂��B
    v.pop_back();
    std::cout << "v�̃T�C�Y�́A" << v.size() << '\n'; // v�̗v�f����\��

    for (int i=0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }

    std::cout << "�I�����܂����B\n";
    
    return 0;
}