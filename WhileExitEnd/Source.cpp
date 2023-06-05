#include<iostream>
#include<string>
using namespace std;
//キーボードからの入力(string)を受け取り表示します。
//exitを受け取るまで無限ループします。

int main() {
	//print処理のC++的な書き方
	//std::cout << "文字列表示\n";

	while (true) {
		string cmd;
		cout << "コマンドを入力してください。\n";
		cout << "exitで終了します。\n";

		cin >> cmd;
		if (cmd == "exit") {
			std::cout << "exitを受け取りました。\n";
			break;
		}
		else {
			cout << "\n入力コマンド" << cmd << "です。\n";
		}
	}
	cout << "終了します。\n";
	return 0;
}