/*Бинарный поиск: Реализовать алгоритм поиска элемента 
в отсортированном массиве.*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");

    
    double vr;
    int size_m;
    double isk;
    double proverka;

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

    size_m = (int)proverka;

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
    cout << "Отсортированный массив: ";
    for (int i = 0;i < size_m; i++){
        cout << p[i]<< " "; 
    }

    cout<<endl;

    cout << "Введите то число,которе вы хотите найти: ";
    cin >> isk;
    if (cin.fail()){
        cout <<"Ошибка!!! Нужно ввести число.";
    return 0;
    }
    
    int left=0;
    int right=size_m-1;
    int sr=0;
    bool found=false;

    while(left<=right){
        sr = (left + right) / 2;
        if (isk == p[sr]){
            found=true;
            cout<< "Число найдено!! Индекс:"<< sr;
            break;
        }
        else if (isk<p[sr]){
            right=sr-1;
        }
        else {
            left=sr+1;
            
        }
    }
    if (found==false){
        cout <<"Такого числа в массиве нет. Число не найдено.";
    }

    return 0;


}