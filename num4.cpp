/*4) Напишите программу, которая принимает на вход массив из
 (N) целых чисел и целевое число (K). Программа должна найти и
  вывести индексы двух элементов массива, сумма которых равна (K).
   Если таких элементов несколько, выведите любую пару. 
   Если пары нет — сообщите об этом.*/

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    double proverka;
    int N;

    cout << "Введите размер массива (Введите положительное целое число): ";
    cin >> proverka;

    if (cin.fail()){
        cout << "Ошибка!!! Нужно ввести число.";
    return 0;
    }

    if (proverka != (int)proverka){
        cout << "Ошибка!!! Дробные числа вводить нельзя. Введите целое число.";
    return 0;
    }

    if (proverka <= 0){
        cout << "Ошибка!!! Нельзя вводить ноль и отрицательные числа.";
    return 0;
    }

    N = (int)proverka;
    int p[N];
    
    for (int i = 0;i < N; i++){
        cout << "Введите элемент массива: ";
        cin >> p[i];
        if (cin.fail()) {
            cout << "Ошибка!!! Нужно ввести число.";
        return 0;
        }
    }
    int K;
    cout << "Введите целевое число K: ";
    cin >> K;

    bool found=false;
    for (int i=0;i<N && found==false; i++){
        for (int j=i+1;j<N;j++){
            if ((p[i]+p[j])==K){
                cout << "Найдена пара!" << endl;
                cout << "Индексы элементов: " << i << " и " << j << endl;
                found =true;
                break;
            }
        }
    }
    if (found==false){
        cout << "Пары элементов с такой суммой нет." << endl;
    }
    return 0;
}