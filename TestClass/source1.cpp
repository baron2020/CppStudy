#include<iostream>
#include<string>

//クラスの基本的な使い方
//クラスの関数の使用

class TestClass
{
public:
	int a = 0;
	void test_show() {
		std::cout << "test_show関数を実行しました。" << '\n';
		std::cout << "aの値：" << a << '\n';
	}
};

int main() {
	std::cout << "テストコード\n";
	//インスタンス化
	auto tc = TestClass();
	std::cout << tc.a << "\n";
	tc.test_show();
	return 0;
}