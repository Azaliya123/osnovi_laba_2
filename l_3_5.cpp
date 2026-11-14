/*5) «Текстовая мини-игра: Угадай число».
 Создайте игру, в которой пользователь угадывает рандомное число из диапазона (которое он сам выбрал). 
После каждого предположения давайте подсказку пользователю. Разделите игру «Угадай число» на логические функции. 
Пример:
- int generateSecretNumber(int min, int max) — загадывает случайное число.
- int getPlayerGuess() — запрашивает вариант у пользователя.
- void giveHint(int secret, int guess) — выводит подсказку («Меньше», «Больше» или «Угадал!»).
В функции main организуйте игровой цикл, который связывает эти функции воедино, ведет подсчет попыток и предлагает сыграть еще раз после победы.*/

#include <iostream>
using namespace std;

int generateSecretNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int getPlayerGuess() {
    int guess;
    cout << "Введите ваше предположение: ";
    cin >> guess;
    return guess;
}

void giveHint(int secret, int guess) {
    if (guess < secret) {
        cout << "Больше!\n";
    }
    else if (guess > secret) {
        cout << "Меньше!\n";
    }
    else {
        cout << "Угадал!\n";
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char answer = 'y';

    while (answer == 'y' || answer == 'Y') {
        int min, max;

        cout << "Введите минимальную границу: ";
        cin >> min;

        if (cin.fail()) {
            cout << "Ошибка! Нужно ввести число.\n";
            return 0;
        }

        cout << "Введите максимальную границу: ";
        cin >> max;

        if (cin.fail()) {
            cout << "Ошибка! Нужно ввести число.\n";
            return 0;
        }

        while (min >= max) {
            cout << "Ошибка! Минимум должен быть меньше максимума.\n";

            cout << "Введите минимальную границу: ";
            cin >> min;

            if (cin.fail()) {
                cout << "Ошибка! Нужно ввести число.\n";
                return 0;
            }

            cout << "Введите максимальную границу: ";
            cin >> max;

            if (cin.fail()) {
                cout << "Ошибка! Нужно ввести число.\n";
                return 0;
            }
        }

        int secret = generateSecretNumber(min, max);
        int attempts = 0;
        bool guessed = false;

        cout << "\nЯ загадал число от " << min << " до " << max << ".\n";

        while (guessed == false) {
            int guess = getPlayerGuess();

            if (guess < min || guess > max) {
                cout << "Число не входит в выбранный диапазон!\n";
                continue;
            }

            attempts+=1;

            giveHint(secret, guess);

            if (guess == secret) {
                guessed = true;
            }
        }

        cout << "Вы угадали за " << attempts << " попыток!\n";

        cout << "Хотите сыграть еще раз? (y/n): ";
        cin >> answer;
    }

    cout << "Спасибо за игру!\n";

    return 0;
}