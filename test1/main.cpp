int main() {
    int score1, score2, score3;
    cout << "請輸入三科成績（以空格分隔）：";
    cin >> score1 >> score2 >> score3;

    double averageScore = (score1 + score2 + score3) / 3.0;

    if (score1 < 40 || score2 < 40 || score3 < 40) {
        cout << "不及格（有科目低於40分）\n";
    } else if (averageScore >= 60) {
        cout << "夠格\n";
    } else {
        cout << "不及格（平均未達60分）\n";
    }

    cout << "你的平均為: " << averageScore << endl;

    return 0;
}
