#include <fstream>
#include <iostream>
#include <string>
#include <vector>

//test1.txtの中身を読み込み、カンマで区切り、vectorに格納する。
//ベクターの全要素を表示をする。


std::vector<std::string> split(std::string str) {
    std::string separator = ",";
    std::vector<std::string> result;
    std::string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    std::string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != std::string::npos; prev = (pos += sl)) {
        result.emplace_back(tstr, prev, pos - prev);
    }
    std::cout << "resultサイズ：" << result.size() << '\n';
    return result;
}

int main(){
    std::vector<std::vector<std::string>> all_v;

    std::ifstream file("test1.txt");  // 読み込むファイルのパスを指定
    std::string line;

    std::cout << "出力開始" << std::endl;
    //最終点に達するまで
    while (file) { 
        file >> line; //fileからlineにデータを格納
        std::cout << line << std::endl; //lineを表示
        std::vector<std::string> temp_v = split(line);
        //all_vの最後に追加
        all_v.push_back(temp_v);
    }
    std::cout << "出力終了" << std::endl;
    std::cout << "ベクターサイズ：" <<all_v.size() << std::endl;

    //size_t：そのオブジェクトのサイズを表現するのに十分な精度を持つことが保証されている。
    for (size_t i = 0; i < all_v.size(); ++i) {
        for (size_t j = 0; j < all_v.size(); ++j) {
            std::cout << "[i]:" << i << " [j]:" << j << " :" << all_v[i][j] << std::endl;
        }
    }
    return (0);
}