#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");

    char text[1000];
    cout << "Введите текст: ";
    cin.getline(text, 1000);

    int l = 0;
    while (text[l] != '\0') {
        l++;
    }

    cout << "Длина текста: " << l << endl;

    int k, m;
    cout << "Введите k: ";
    cin >> k;
    cout << "Введите m: ";
    cin >> m;

    if (k < 1 || m < k || m > l) {
        cout << "Ошибка! Неверные границы.\n";
        return 0;
    }

    for (int i = k - 1; i <= m - 1; i++) {
        cout << text[i];
    }

    cout << endl;
    return 0;
}