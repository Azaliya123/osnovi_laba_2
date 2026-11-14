/*1)  Максимальное из 3х. Написать функцию int maxOfThree(int a, int b, int c),
 которая возвращает наибольшее из трех переданных целых чисел*/

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c){
        int naib=a;

        if (b>naib){
            naib=b;
        }
        if (c > naib){
            naib=c;
        }
        return naib;
    }

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a;
    int b;
    int c;
    int result;
    cout<<"Введите целое число a: ";
    cin>>a;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите целое число.";
        return 0;
    }

    cout<<"Введите целое число b: ";
    cin>>b;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите целое число.";
        return 0;
    }

    cout<<"Введите целое число c: ";
    cin>>c;
    if (cin.fail()){
        cout<<"Ошибка!!!!Введите целое число.";
        return 0;
    }

    result=maxOfThree(a,b,c);
    
    cout<<"Максимальное из этих трёх чисел: "<<result;
    return 0;
}