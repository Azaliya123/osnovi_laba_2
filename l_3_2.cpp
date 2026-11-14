/*2) Калькулятор. Напишите функцию double 
calculate(double a, double b, char op), которая
 принимает два числа и знак операции (+, -, *, /).
  Функция должна возвращать результат вычислений.
   Ввод происходит от пользователя.*/
#include <iostream>
using namespace std;

double calculate(double a, double b, char op){
    double result;
    if (op=='+'){
        result=a+b;
    }

    else if (op=='-'){
        result=a-b;
    }

    else if (op=='*'){
        result=a*b;
    }

    else if (op=='/'){
        result=a/b;
    }
    return result;
}
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    double a;
    double b;
    char op;
    double result;
    cout<<"Введите число: ";
    cin>>a;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите число.";
        return 0;
    }
    
    cout<<"Введите число: ";
    cin>>b;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите число.";
        return 0;
    }


    cout<<"Введите знак операции: ";
    cin>>op;
    if (op!='+' && op!='-' && op!='/' && op!='*'){
        cout<<"Ошибка!!!!Введите знак операции.";
        return 0;
    }
    if (op == '/' && b == 0) {
    cout << "Ошибка: деление на ноль!";
    return 0;
}
    result=calculate(a,b,op);
    cout<<"Результат вычисления: "<< result;
    return 0;
}