#include <vector>
#include <iostream>

//���I�z��N���X std::vector �̎g����

int main(void) {
    std::vector<int> v;
    v = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n";
    std::cout << "�I�����܂����B\n";
    
    return 0;
}