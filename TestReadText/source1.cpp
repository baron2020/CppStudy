#include <fstream>
#include <iostream>
#include <string>

//読み込み対象のテキストをエンコードUTF-8に変更する。（UTF-8(BOM付き)だと余計な文字化けが追加されたため）
//test1.txtは、読み込み対象のファイル。sorce1ファイルと同じディレクトリに格納した。
//最初のif文で、読み込み対象ファイルが存在するか確認をしている。

int main() {
    std::ifstream file("test1.txt");  // 読み込むファイルのパスを指定
    std::string line;
    
    if (!file) {
        //エラー処理
        std::cout << "ファイルが存在しません。" << std::endl;
    }
    else {
        std::cout << "出力開始" << std::endl;
        //1行ずつ読み込む
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        std::cout << "出力終了" << std::endl;
    }

    return (0);
}