/*4) Программа шифрование Цезаря. Напишите
функцию string encryptCaesar(string text, int shift),
 которая сдвигает каждую букву английского 
 алфавита в строке на shift позиций вперед
  (с циклическим переносом, например, после z
   идет a).*/

#include <iostream>
#include <string>
using namespace std;

string encryptCaesar(string text, int shift) {
    string bykvi = "abcdefghijklmnopqrstuvwxyz";
    shift = shift % 26;

    for (int i = 0; i < text.length(); i++) {
        int index = bykvi.find(text[i]);
        int newIndex = (index + shift) % 26;
        text[i] = bykvi[newIndex];
    }

    return text;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    string t;
    int shift;

    cout << "Введите текст: ";
    cin >> t;

    bool correct = true;

    for (int i = 0; i < t.length(); i++) {
        if (t[i] < 'a' || t[i] > 'z') {
            correct = false;
            break;
        }
    }

    if (correct!=true) {
        cout << "Ошибка! Используйте только маленькие английские буквы.";
        return 0;
    }

    cout << "Введите сдвиг: ";
    cin >> shift;

    if (cin.fail() || shift < 0) {
        cout << "Ошибка! Сдвиг должен быть неотрицательным целым числом.";
        return 0;
    }

    string result = encryptCaesar(t, shift);

    cout << "Зашифрованный текст: " << result;

    return 0;
}