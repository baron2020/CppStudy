#include <iostream>
#include <string>
#include <vector>

using namespace std;

//ΆρπΌpσΕζΨθAvector<string>Ιi[·ι
//ΞΫΜΆρFposition startpos moves 7g7f 3c3d 2g2f


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
    string str = ("position startpos moves 7g7f 3c3d 2g2f");   // ͺΞΫΜΆρ
    cout << "ΞΫΜΆρF" << str << "\n";

    vector<string> ary = split(str, " ");
    for (int i = 0; i < ary.size(); i++) {
        cout << ary[i] << endl;
    }

    return (0);
}