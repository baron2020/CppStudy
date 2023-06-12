#include<iostream>
#include<string>

//クラスの基本的な使い方
//クラスの関数の使用

class ShogiBan
{

public:
	int EMPTY = 0;//空
	int P = 1;//Pawn（先手の歩）
	int L = 2; //Lance（先手の香車）
	int N = 3; //Night（先手の桂馬）
	int S = 4; //Silver（先手の銀）
	int G = 5; //Gold（先手の金）
	int B = 6; //Bishop（先手の角）
	int R = 7; //Rook（先手の飛車）
	int K = 8; //Rook（先手の王）

	//コンストラクタ、インスタンス化の時に自動的に呼び出される。
	ShogiBan() {
		std::cout << "コンストラクタの実行" << '\n';
		std::cout << "角：" << B << "\n";
		//マップ
		//std::map<std::string, int> mp;    //  文字列 → 整数 の連想配列
		//mp["abc"] = 123;
	}

	void test_show() {
		std::cout << "test_show関数を実行しました。" << '\n';
		std::cout << "歩：" << P << "\n";
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
	sb.test_show();
	sb.test_sfen();
	return 0;
}