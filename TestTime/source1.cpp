#include <iostream>
#include <chrono>

//�������Ԃ̌v��

int main()
{
    std::cout << "�������Ԃ��m�F���܂��B\n";

    auto start = std::chrono::system_clock::now();// �v���J�n����
    
    //����
    for (int i = 0; i <= 1000000; ++i) {
        //100���񃋁[�v
    }
    auto end = std::chrono::system_clock::now();// �v���I������
    auto dur = end - start;// �����ɗv��������

    //�i�m�b�inanoseconds�j�A�}�C�N���b�imicroseconds�j�A�~���b�imilliseconds�j�A�b�iseconds�j ���w��ł���B
    auto nano = std::chrono::duration_cast<std::chrono::nanoseconds>(dur).count();
    auto miri = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
    //auto sec = std::chrono::duration_cast<std::chrono::seconds>(dur).count();
    
    //�i�m�A�~���b�\��
    std::cout << nano << " nano \n";
    std::cout << miri << " miri \n";

    return (0);
}