/*4) Напишите программу, которая принимает на вход массив из (N)
 целых чисел и целевое число (K). Программа должна найти и вывести
  индексы двух элементов массива, сумма которых равна (K). Если таких
   элементов несколько, выведите любую пару. Если пары нет — сообщите
    об этом.
4.1) Вместо ввода пользователя сгенерировать 
массив из 1 000 000 элементов и найти любую пару заданную
 с клавиатуры (К) Программа должна найти ответ меньше чем за 1 минуту.
Сгенирировать массив можно так: 
std::generate(arr.begin(), arr.end(), [&]() { return std::uniform_int_distribution<>(1, 1000)(gen); });
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    vector<int> arr(1000000);

    random_device rd;
    mt19937 gen(rd());

    generate(arr.begin(), arr.end(), [&]() {
        return uniform_int_distribution<>(1, 1000)(gen);
    });

    double proverkaK;
    int K;

    cout << "Введите целевое число K: ";
    cin >> proverkaK;

    if (cin.fail()) {
        cout << "Ошибка!!! Нужно ввести число.";
        return 0;
    }

    if (proverkaK != (int)proverkaK) {
        cout << "Ошибка!!! Дробные числа вводить нельзя.";
        return 0;
    }

    K = (int)proverkaK;
    

    int indexes[1001];

    for (int i = 0; i <= 1000; i++) {
        indexes[i] = -1;
    }
    bool found = false;

    for (int i = 0; i < 1000000; i++) {
        int need = K - arr[i];

        if (need >= 1 && need <= 1000 && indexes[need] != -1) {
            cout << "Найдена пара!" << endl;
            cout << "Индексы: " << indexes[need] << " и " << i << endl;

            found = true;
            break;
        }

        indexes[arr[i]] = i;
    }

    if (found == false) {
        cout << "Пара не найдена." << endl;
    }
    return 0;
}