# include <iostream>
# include <string>
using namespace std;
int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    string n;
    int k;
    int m;
    string a="";
    cout << "Введите текст (английские буквы, цифры, пробелы и знаки препинания): ";
    getline(cin, n);
    cout << "Введите первый порядковый номер (k): ";
    cin >> k;
    cout << "Введите второй порядковый номер (m): ";
    cin >> m;
    
    if (k<1){
        cout << "Ошибка!!! Первый порядковый номер должен быть больше нуля.\n";
        return 0;
    }

    if (k>n.length()){
        cout << "Ошибка!!! Первый порядковый номер выходит за границы текста.\n";
        return 0;
    }

    if (m<1){
        cout << "Ошибка!!! Второй порядковый номер должен быть больше нуля.\n";
        return 0;
    }

    if (m<k){
        cout << "Ошибка!!! Второй порядковый номер не может быть меньше первого.\n";
        return 0;
    }

    if (m>n.length()){
        cout << "Ошибка!!! Второй порядковый номер выходит за границы текста.\n";
        return 0;
    }

    for (int i=(k-1);i<m;i+=1)
        {
            a+=n[i];
        }
    cout << "Подстрока: " << a;
    return 0;
}