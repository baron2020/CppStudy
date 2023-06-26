#include <iostream>
#include <random>

//ランダムな値を範囲を指定して生成する。
//今回は、サイコロの目を想定して1～6の範囲で乱数を生成。

int main(){
    std::cout << "テスト" << std::endl;
    std::mt19937 engine{ std::random_device{}() };
    std::uniform_int_distribution<int> dist(1, 6);
    //表示
    int index = dist(engine);
    std::cout << "index:" << index << std::endl;
    //20回ループ
    for (int i = 0; i < 20; i++){
        std::cout << "i = " << i << ", dist(engine) = " << dist(engine) << std::endl;
    }
    return (0);
}