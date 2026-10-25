#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int den, mes, god;
    int tekDen, tekMes, tekGod;

    cout << "Введите день рождения: ";
    cin >> den;
    cout << "Введите месяц рождения: ";
    cin >> mes;
    cout << "Введите год рождения: ";
    cin >> god;

    cout << "Введите сегодняшний день: ";
    cin >> tekDen;
    cout << "Введите сегодняшний месяц: ";
    cin >> tekMes;
    cout << "Введите сегодняшний год: ";
    cin >> tekGod;

    // Проверка корректности годов и месяцев
    if (god < 1 || tekGod < 1 ||
        mes < 1 || mes > 12 ||
        tekMes < 1 || tekMes > 12) {
        cout << "Ошибка! Некорректная дата.";
        return 0;
    }

    // Определяем количество дней в месяце рождения
    int dni[12] = {31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};

    // Проверяем, високосный ли год рождения
    if (god % 400 == 0 || (god % 4 == 0 && god % 100 != 0)) {
        dni[1] = 29;
    }

    if (den < 1 || den > dni[mes - 1]) {
        cout << "Ошибка! Некорректный день рождения.";
        return 0;
    }

    // Определяем количество дней в текущем месяце
    int tekDni[12] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

    if (tekGod % 400 == 0 ||
        (tekGod % 4 == 0 && tekGod % 100 != 0)) {
        tekDni[1] = 29;
    }

    if (tekDen < 1 || tekDen > tekDni[tekMes - 1]) {
        cout << "Ошибка! Некорректный сегодняшний день.";
        return 0;
    }

    // Проверяем, что дата рождения не в будущем
    if (god > tekGod ||
        (god == tekGod && mes > tekMes) ||
        (god == tekGod && mes == tekMes && den > tekDen)) {
        cout << "Ошибка! Дата рождения не может быть в будущем.";
        return 0;
    }

    // Вычисляем возраст
    int vozrast = tekGod - god;

    if (tekMes < mes || (tekMes == mes && tekDen < den)) {
        vozrast--;
    }

    cout << "Возраст: " << vozrast << endl;

    return 0;
}