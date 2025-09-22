#include <iostream>

int main() {
    double celsius;
    double fahrenheit;

    // 輸入華氏溫度
    std::cout << "請輸入華氏溫度!\n";
    std::cin >> fahrenheit;

    // 計算攝氏溫度
    celsius = (fahrenheit - 32) / 9 * 5;

    // 輸出攝氏溫度
    std::cout << "攝氏溫度為: " << celsius << " 度\n";
    
    return 0;
}
