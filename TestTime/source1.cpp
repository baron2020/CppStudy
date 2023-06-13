#include <iostream>
#include <chrono>

//処理時間の計測

int main()
{
    std::cout << "処理時間を確認します。\n";

    auto start = std::chrono::system_clock::now();// 計測開始時間
    
    //処理
    for (int i = 0; i <= 1000000; ++i) {
        //100万回ループ
    }
    auto end = std::chrono::system_clock::now();// 計測終了時間
    auto dur = end - start;// 処理に要した時間

    //ナノ秒（nanoseconds）、マイクロ秒（microseconds）、ミリ秒（milliseconds）、秒（seconds） を指定できる。
    auto nano = std::chrono::duration_cast<std::chrono::nanoseconds>(dur).count();
    auto miri = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
    //auto sec = std::chrono::duration_cast<std::chrono::seconds>(dur).count();
    
    //ナノ、ミリ秒表示
    std::cout << nano << " nano \n";
    std::cout << miri << " miri \n";

    return (0);
}