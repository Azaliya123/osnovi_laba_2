#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");

    double num;
    int n;
    double result = 1;

    cout << "Введите число: ";
    cin >> num;

    cout << "Введите степень: ";
    cin >> n;

    if (num == 0 && n < 0) {
        cout << "Ошибка!!Нельзя возвести 0 в отрицательную степень";
        return 0;
    }

    if (n > 0) {
        while (n > 0) {
            result = result * num;
            n = n - 1;
        }
    }
    else {
        while (n < 0) {
            result = result / num;
            n = n + 1;
        }
    }
    
    cout << "Результат: " << result;
    return 0;
}