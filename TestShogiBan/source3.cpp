#include<iostream>
#include <string>
#include <map>
#include <vector>

//�����ՃN���X

class ShogiBan
{
public:
	std::map<std::string, std::string> mp;//�����Տ��
	/*
	int E = 0;// EMPTY�i��j
	int P = 1; //Pawn�i���̕��j
	int L = 2; //Lance�i���ԁj
	int N = 3; //Night�i�j�n�j
	int S = 4; //Silver�i��j
	int G = 5; //Gold�i���j
	int B = 6; //Bishop�i�p�j
	int R = 7; //Rook�i��ԁj
	int K = 8; //King�i���j
	*/

	//�R���X�g���N�^�A�C���X�^���X���̎��Ɏ����I�Ɏ��s�����B
	ShogiBan() {
		std::cout << "�R���X�g���N�^�̎��s" << '\n';
		std::string start_board = "lnsgkgsnlErEEEEEbEpppppppppEEEEEEEEEEEEEEEEEEEEEEEEEEEPPPPPPPPPEBEEEEERELNSGKGSNL";
		std::cout << "�����Ղ̃T�C�Y�F" << start_board.size() << '\n';
		//std::cout << "[1]�F" << start_board[1] << '\n';//n
		int start_board_count = 0;
		std::string suji_s = "987654321";
		std::string dan_s = "abcdefghi";
		for (int i = 0; i < dan_s.length(); i++) {
			for (int j = 0; j < suji_s.length(); j++) {
				char suji_char = suji_s[j];
				std::string suji{ suji_char };//string�^�ɕϊ�
				std::string masu = suji+ dan_s[i];
				//std::cout << "�}�X�F" << masu << '\n';
				mp[masu] = start_board[start_board_count];
				start_board_count++;
			}
		}
		/*�}�b�v�̊m�F
		std::cout << "mp�T�C�Y�F" << mp.size() << '\n';
		start_board_count = 0;
		for (int i = 0; i < dan_s.length(); i++) {
			for (int j = 0; j < suji_s.length(); j++) {
				char suji_char = suji_s[j];
				std::string suji{ suji_char };//string�^�ɕϊ�
				std::string masu = suji + dan_s[i];
				//�}�b�v�̒��g���m�F
				std::string check_value = mp[masu];
				std::cout << "check_value�F" << check_value << '\n';
				start_board_count++;
			}
		}
		*/
	}

	//position�R�}���h��vector<std::string> result�Ɋi�[����B
	void positio_split(std::string str) {
		std::string separator = " ";
		std::vector<std::string> result;
		if (separator == "") { 
			return;
		}
		else {
			std::string tstr = str + separator;
			long l = tstr.length(), sl = separator.length();
			std::string::size_type pos = 0, prev = 0;

			for (; pos < l && (pos = tstr.find(separator, pos)) != std::string::npos; prev = (pos += sl)) {
				result.emplace_back(tstr, prev, pos - prev);
			}
		}
		
		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i] << std::endl;
		}
		std::cout << "result�T�C�Y�F" << result.size() << '\n';
		//std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
	}

	void test_show() {
		std::cout << "test_show�֐������s���܂����B" << '\n';
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
	//sb.test_show();
	//sb.test_sfen();
	std::string str = ("position startpos moves 7g7f 3c3d 2g2f");
	sb.positio_split(str);
	return 0;
}