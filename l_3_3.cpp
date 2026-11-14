/*3) Числа Фибоначи. Написать функцию
 int fibonacci(int n), которая возвращает
  n-е число Фибоначчи.*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int a=0;
    int b=1;
    int sum;
    for (int i = 1; i < n; i++) {
        sum = a + b;
        a = b;
        b = sum;
}
    return b;
}

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int result;
    int n;
    cout<<"Введите номер числа Фибоначчи(целое положительное число): ";
    cin>>n;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите целое положительное число.";
        return 0;
    }
    if (n<0){
        cout<<"Ошибка!!!!!!!Введите целое положительное число.";
        return 0;
    }
    result=fibonacci(n);
    cout<<"Результат: "<< result;
    return 0;
}