#include <vector>
#include <iostream>

//動的配列クラス
//std::vectorの使い方

int main(void) {
    std::vector<int> v;
    v = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n";
    std::cout << "終了しました。\n";

    return 0;
}