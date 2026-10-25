#include <iostream>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    string n;
    int bykvi=0;
    int cif=0;
    int probel=0;
    int znaki=0;
    cout << "Введите текст (латинские буквы, цифры, пробелы и специальные символы): ";
    getline(cin,n);
    int i=0;
        while(i<n.length()){
        if (n[i] >= '0' && n[i] <= '9'){
            cif+=1;
        }
        else if (n[i]==' '){
            probel+=1;
        }
        else if ((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z')){
            bykvi+=1;
        }
        else if (n[i] == '.' || n[i] == ',' || n[i] == '!' || n[i] == '?' || n[i] == ':' || n[i] == ';' || n[i] == '-' || n[i] == '(' || n[i] == ')' || n[i] == '"' || n[i] == '\'') {
            znaki += 1;
        }       
        i+=1;
    }
        
    cout << "Буквы: " << bykvi << endl
     << "Цифры: " << cif << endl
     << "Пробелы: " << probel << endl
     << "Знаки препинания: " << znaki;
    return 0;
}