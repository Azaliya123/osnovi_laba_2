#include <iostream>
using namespace std;
int main() {
    //std::setlocale(LC_ALL,"ru_RU.UTF-8");//только на вин
    //std::cout <<"Привет";
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int numb_1=5;
    int numb_2=10;
    numb_1=numb_1+numb_2;
    numb_1+=80;

    int res_1 = numb_1+numb_2;
    int res_2 = numb_1 - numb_2;
    int res_3 = numb_1 * numb_2;
    float res_4 = numb_1 / numb_2;
    float res_5 = numb_1 % numb_2;

    if (numb_1>numb_2){
        cout<<"Больше\n";
    }
    else{
        cout<<"Меньше\n";
    }
    //cout <<"Привет";
 /*   for (int i=0;i<10; i++){
        cout <<"давай домой"<< i <<endl;
    }
*/
    int a=0;
    while (a>5){
        coat <<"bbbbb"<<endl;
        a++;
    }
    return 0;
}
/*
g++ lab_1.cpp -o lab_1
./lab_1
chcp 65001
taskkill /IM lab_1.exe /F
*/
