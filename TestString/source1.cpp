#include <iostream>
#include <string>
#include <vector>

using namespace std;

//�������,�ŋ�؂�Avector<string>�Ɋi�[����
//�Ώۂ̕�����Fapple,orenge,peach


vector<string> split(string str, string separator) {
    if (separator == "") return { str };
    vector<string> result;
    string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl)) {
        result.emplace_back(tstr, prev, pos - prev);
    }
    return result;
}

int main()
{
    string str = ("apple,orenge,peach"), separator(",");   // �����Ώۂ̕�����
    cout << "�Ώۂ̕�����F" << str << "\n";

    vector<string> ary = split(str, ",");
    for (int i = 0; i < ary.size(); i++) {
        cout << ary[i] << endl;
    }

    return (0);
}