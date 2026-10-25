/*Сортировка пузырьком: Реализовать алгоритм сортировки массива. Массив вводит пользователь,
 задавая сначала размер массива, далее его значения.*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");

    double vr;
    int size_m;
    cout << "Введите размер массива (Введите положительное целое число):";
    cin >> size_m;

    if (cin.fail()){
        cout <<"Ошибка!!! НУжно ввести число.";
    return 0;
    }
    if (size_m==0 || size_m<0){
        cout << "Ошибка,нельзя вводить ноль и отрицательные числа!!! Введите положительное целое число";
    return 0;
    }

    double p[size_m];

    
    for (int i = 0;i < size_m; i++){
        cout << "Введите элемент массива: ";
        cin >> p[i];
        if (cin.fail()) {
            cout << "Ошибка!!! Нужно ввести число.";
        return 0;
        }
    }

    for (int j=0;j<(size_m-1);j++){
        for (int i=0;i<size_m-1;i++){
            if (p[i]>p[i+1]){
                vr=p[i];
                p[i]=p[i+1];
                p[i+1]=vr;
            }
        }
    }
    for (int i = 0;i < size_m; i++){
        cout << p[i]<< " ";
    }
    return 0;
}