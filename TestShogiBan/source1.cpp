#include<iostream>
#include<string>

//�N���X�̊�{�I�Ȏg����
//�N���X�̊֐��̎g�p

class ShogiBan
{

public:
	int EMPTY = 0;//��
	int P = 1;//Pawn�i���̕��j
	int L = 2; //Lance�i���̍��ԁj
	int N = 3; //Night�i���̌j�n�j
	int S = 4; //Silver�i���̋�j
	int G = 5; //Gold�i���̋��j
	int B = 6; //Bishop�i���̊p�j
	int R = 7; //Rook�i���̔�ԁj
	int K = 8; //Rook�i���̉��j

	//�R���X�g���N�^�A�C���X�^���X���̎��Ɏ����I�ɌĂяo�����B
	ShogiBan() {
		std::cout << "�R���X�g���N�^�̎��s" << '\n';
		std::cout << "�p�F" << B << "\n";
		//�}�b�v
		//std::map<std::string, int> mp;    //  ������ �� ���� �̘A�z�z��
		//mp["abc"] = 123;
	}

	void test_show() {
		std::cout << "test_show�֐������s���܂����B" << '\n';
		std::cout << "���F" << P << "\n";
	}
	void test_sfen() {
		std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
		std::cout << "�����ǖʁF" << start << '\n';
	}
};

int main() {
	std::cout << "�e�X�g�R�[�h\n";
	//�����ՃN���X�̃C���X�^���X��
	auto sb = ShogiBan();
	sb.test_show();
	sb.test_sfen();
	return 0;
}