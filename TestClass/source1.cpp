#include<iostream>
#include<string>

//�N���X�̊�{�I�Ȏg����
//�N���X�̊֐��̎g�p

class TestClass
{
public:
	int a = 0;
	void test_show() {
		std::cout << "test_show�֐������s���܂����B" << '\n';
		std::cout << "a�̒l�F" << a << '\n';
	}
};

int main() {
	std::cout << "�e�X�g�R�[�h\n";
	//�C���X�^���X��
	auto tc = TestClass();
	std::cout << tc.a << "\n";
	tc.test_show();
	return 0;
}