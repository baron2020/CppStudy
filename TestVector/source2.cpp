#include <vector>
#include <iostream>

//std::vectorの使い方
//要素の追加、末尾の要素削除、要素の表示

int main(void) {
    std::vector<int> v;
    std::cout << "vのサイズは、" << v.size() << '\n'; // vの要素数を表示
    v.push_back(123);
    v.push_back(863);
    v.push_back(555);
    v.push_back(241);
    v.push_back(385);
    std::cout << "vのサイズは、" << v.size() << '\n'; // vの要素数を表示

    //末尾の要素を取り除くには、pop_back関数を使います。
    v.pop_back();
    std::cout << "vのサイズは、" << v.size() << '\n'; // vの要素数を表示

    for (int i=0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }

    std::cout << "終了しました。\n";
    
    return 0;
}