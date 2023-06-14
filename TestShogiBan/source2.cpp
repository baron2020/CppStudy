#include<iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

//�����ՃN���X

class ShogiBan
{
public:
	map<std::string, int> mp;//�����Տ��
	int EMPTY = 0;//��
	int P = 1; //Pawn�i���̕��j
	int L = 2; //Lance�i���ԁj
	int N = 3; //Night�i�j�n�j
	int S = 4; //Silver�i��j
	int G = 5; //Gold�i���j
	int B = 6; //Bishop�i�p�j
	int R = 7; //Rook�i��ԁj
	int K = 8; //King�i���j

	//�R���X�g���N�^�A�C���X�^���X���̎��Ɏ����I�Ɏ��s�����B
	ShogiBan() {
		std::cout << "�R���X�g���N�^�̎��s" << '\n';

		int suji_arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
		string dan_s = "abcdefghi";

		for (int i = 0; i < dan_s.length(); i++) {
			for (int j : suji_arr) {
				string masu = to_string(j) + dan_s[i];
				cout << "�}�X�F" << masu << '\n';
			}
		}
	}

	void test_show() {
		std::cout << "test_show�֐������s���܂����B" << '\n';
		std::cout << "���F" << P << "\n";
	}
	void test_sfen() {
		std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
		std::cout << "�����ǖʁF" << start << '\n';
	}

	void positio_split(string str) {
		string separator = " ";
		vector<string> result;
		if (separator == "") { 
			return;
		}
		else {
			string tstr = str + separator;
			long l = tstr.length(), sl = separator.length();
			string::size_type pos = 0, prev = 0;

			for (; pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl)) {
				result.emplace_back(tstr, prev, pos - prev);
			}
		}
		
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << endl;
		}
		cout << "result�T�C�Y�F" << result.size() << '\n';
		//std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
	}

};

int main() {
	std::cout << "�e�X�g�R�[�h\n";
	//�����ՃN���X�̃C���X�^���X��
	auto sb = ShogiBan();
	sb.test_show();
	sb.test_sfen();

	string str = ("position startpos moves 7g7f 3c3d 2g2f");
	sb.positio_split(str);
	return 0;
}