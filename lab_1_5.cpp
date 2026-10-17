#include <iostream>
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");

    int n;
    cout << "Введите число: ";
    cin >> n;

    bool otr = n<0;

    int x2 = n;
    string x_2 = "";

    int x8 = n;
    string x_8 = "";

    int x16 = n;
    string x_16 = "";

    if (n<0){
        x2=-x2;
        x8=-x8;
        x16=-x16;
    }
    string sim = "0123456789ABCDEF";

    while (x2 > 0){
        x_2 = sim[x2 % 2] + x_2;
        x2 /= 2;
    }

    while (x8 > 0){
        x_8 = sim[x8 % 8] + x_8;
        x8 /= 8;
    }

    while (x16 > 0){
        x_16 = sim[x16 % 16] + x_16;
        x16 /= 16;
    }

    if (n == 0){
        x_2 = "0";
        x_8 = "0";
        x_16 = "0";
    }
    if (otr){
        x_2="-"+x_2;
        x_8="-"+x_8;
        x_16="-"+x_16;
    }
    cout << "В двоичной системе: " << x_2 << endl;
    cout << "В восьмеричной системе: " << x_8 << endl;
    cout << "В шестнадцатеричной системе: " << x_16 << endl;

    return 0;
}