#include<iostream>
#include<string>
using namespace std;
//�L�[�{�[�h����̓���(string)���󂯎��\�����܂��B
//exit���󂯎��܂Ŗ������[�v���܂��B

int main() {
	//print������C++�I�ȏ�����
	//std::cout << "������\��\n";

	while (true) {
		string cmd;
		cout << "�R�}���h����͂��Ă��������B\n";
		cout << "exit�ŏI�����܂��B\n";

		cin >> cmd;
		if (cmd == "exit") {
			std::cout << "exit���󂯎��܂����B\n";
			break;
		}
		else {
			cout << "\n���̓R�}���h" << cmd << "�ł��B\n";
		}
	}
	cout << "�I�����܂��B\n";
	return 0;
}