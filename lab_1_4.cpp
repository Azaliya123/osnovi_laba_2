#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    float kg;
    float m;
    cout << "Введите вес(в килограммах): ";
    cin >> kg;
    cout << "Введите рост(в метрах): ";
    cin >> m;

    if (kg <= 0) {
        cout << "Ошибка! Вес должен быть больше нуля.\n";
    return 0;
    }

    if (m <= 0) {
        cout << "Ошибка! Рост должен быть больше нуля.\n";
    return 0;
    }
    float imt=kg/(m*m);
    cout << fixed << setprecision(1) << imt;
    return 0;
}