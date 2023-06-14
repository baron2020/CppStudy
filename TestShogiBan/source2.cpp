#include<iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

//将棋盤クラス

class ShogiBan
{
public:
	map<std::string, int> mp;//将棋盤情報
	int EMPTY = 0;//空
	int P = 1; //Pawn（先手の歩）
	int L = 2; //Lance（香車）
	int N = 3; //Night（桂馬）
	int S = 4; //Silver（銀）
	int G = 5; //Gold（金）
	int B = 6; //Bishop（角）
	int R = 7; //Rook（飛車）
	int K = 8; //King（王）

	//コンストラクタ、インスタンス化の時に自動的に実行される。
	ShogiBan() {
		std::cout << "コンストラクタの実行" << '\n';

		int suji_arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
		string dan_s = "abcdefghi";

		for (int i = 0; i < dan_s.length(); i++) {
			for (int j : suji_arr) {
				string masu = to_string(j) + dan_s[i];
				cout << "マス：" << masu << '\n';
			}
		}
	}

	void test_show() {
		std::cout << "test_show関数を実行しました。" << '\n';
		std::cout << "歩：" << P << "\n";
	}
	void test_sfen() {
		std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
		std::cout << "初期局面：" << start << '\n';
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
		cout << "resultサイズ：" << result.size() << '\n';
		//std::string start = "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL";
	}

};

int main() {
	std::cout << "テストコード\n";
	//将棋盤クラスのインスタンス化
	auto sb = ShogiBan();
	sb.test_show();
	sb.test_sfen();

	string str = ("position startpos moves 7g7f 3c3d 2g2f");
	sb.positio_split(str);
	return 0;
}