# include <iostream>
# include <string>
using namespace std;

int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    string n;
    int k;
    
    cout << "Введите текст (только английские буквы и цифры, без пробелов и знаков препинания): ";
    getline(cin, n);
    cout << "Введите порядковый номер: ";
    cin >> k;

    if (k<1 || k>n.length()){
        cout<<"Ошибка! Такого порядкового номера нет в тексте.\n";
        return 0;
    }
    cout << "Символ под номером " << k << ": " << n[k - 1];
    return 0;
}