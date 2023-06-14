#include <iostream>
#include <string>
#include <vector>

using namespace std;

//•¶š—ñ‚ğ,‚Å‹æØ‚èAvector<string>‚ÉŠi”[‚·‚é
//‘ÎÛ‚Ì•¶š—ñFapple,orenge,peach


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
    string str = ("apple,orenge,peach"), separator(",");   // •ªŠ„‘ÎÛ‚Ì•¶š—ñ
    cout << "‘ÎÛ‚Ì•¶š—ñF" << str << "\n";

    vector<string> ary = split(str, ",");
    for (int i = 0; i < ary.size(); i++) {
        cout << ary[i] << endl;
    }

    return (0);
}