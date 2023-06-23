#include <fstream>
#include <iostream>
#include <string>

//読み込み対象のテキストをエンコードUTF-8に変更する（UTF-8(BOM付き)だと余計な文字化けが追加されたため）
//test1.txt：読み込み対象のファイル。sorce1ファイルと同じディレクトリに格納した。

int main(){
    std::ifstream file("test1.txt");  // 読み込むファイルのパスを指定
    std::string line;

    std::cout << "出力開始" << std::endl;
    //最終点に達するまで
    while (file) { 
        file >> line; //fileからlineにデータを格納
        std::cout << line << std::endl; //lineを表示
    }
    std::cout << "出力終了" << std::endl;

    return (0);
}