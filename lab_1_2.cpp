#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int n;
    int summ=0;
    int nach=0;
    cout << "Введите правую границу диапазона(n>=0): ";
    cin >> n;
    
    if (n<0){
        cout <<"Ошибка!!!Правая граница не может быть отрицательной.\n";
        return 0;
    }
    
    while (nach<=n)
    {
        if (nach%5==0)
            summ+=nach;
        nach+=1;
    }
    cout <<"Сумма чисел,делящихся на 5:"<<summ;
    return 0;
}