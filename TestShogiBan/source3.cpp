#include<iostream>
#include <string>
#include <map>
#include <vector>

//将棋盤クラス

class ShogiBan
{
public:
	std::map<std::string, std::string> mp;//将棋盤情報
	/*
	int E = 0;// EMPTY（空）
	int P = 1; //Pawn（先手の歩）
	int L = 2; //Lance（香車）
	int N = 3; //Night（桂馬）
	int S = 4; //Silver（銀）
	int G = 5; //Gold（金）
	int B = 6; //Bishop（角）
	int R = 7; //Rook（飛車）
	int K = 8; //King（王）
	*/

	//コンストラクタ、インスタンス化の時に自動的に実行される。
	ShogiBan() {
		std::cout << "コンストラクタの実行" << '\n';
		std::string start_board = "lnsgkgsnlErEEEEEbEpppppppppEEEEEEEEEEEEEEEEEEEEEEEEEEEPPPPPPPPPEBEEEEERELNSGKGSNL";
		std::cout << "将棋盤のサイズ：" << start_board.size() << '\n';
		//std::cout << "[1]：" << start_board[1] << '\n';//n
		int start_board_count = 0;
		std::string suji_s = "987654321";
		std::string dan_s = "abcdefghi";
		for (int i = 0; i < dan_s.length(); i++) {
			for (int j = 0; j < suji_s.length(); j++) {
				char suji_char = suji_s[j];
				std::string suji{ suji_char };//string型に変換
				std::string masu = suji+ dan_s[i];
				//std::cout << "マス：" << masu << '\n';
				mp[masu] = start_board[start_board_count];
				start_board_count++;
			}
		}
		/*マップの確認
		std::cout << "mpサイズ：" << mp.size() << '\n';
		start_board_count = 0;
		for (int i = 0; i < dan_s.length(); i++) {
			for (int j = 0; j < suji_s.length(); j++) {
				char suji_char = suji_s[j];
				std::string suji{ suji_char };//string型に変換
				std::string masu = suji + dan_s[i];
				//マップの中身を確認
				std::string check_value = mp[masu];
				std::cout << "check_value：" << check_value << '\n';
				start_board_count++;
			}
		}
		*/
	}

	//positionコマンドをvector<std::string> resultに格納する。
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
		std::cout << "resultサイズ：" << result.size() << '\n';
		//std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
	}

	void test_show() {
		std::cout << "test_show関数を実行しました。" << '\n';
	}
	void test_sfen() {
		std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
		std::cout << "初期局面：" << start << '\n';
	}

};

int main() {
	std::cout << "テストコード\n";
	//将棋盤クラスのインスタンス化
	auto sb = ShogiBan();
	//sb.test_show();
	//sb.test_sfen();
	std::string str = ("position startpos moves 7g7f 3c3d 2g2f");
	sb.positio_split(str);
	return 0;
}