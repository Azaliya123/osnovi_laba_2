//1
/*
#include <iostream>
using namespace std;
int main(){
    int num;
    int n;
    int result=1;
    cin >> num;
    cin >> n;
    while (n>0)
    {
        result=result*num;
        n=n-1;
    }
    cout<<result;
    return 0;
}
*/


//2
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    int summ=0;
    int nach=0;
    cin >> n;
    while (nach<=n)
    {
        if (nach%5==0)
            summ+=nach;
        nach+=1;
    }
    cout << summ;
    return 0;
}
*/

//3
/*
# include <iostream>
# include <string>
using namespace std;
int main() {
    string n;
    int k;
    cin >> n;
    cin >> k;
    cout << n[k-1];
    return 0;
}
*/

/*
# include <iostream>
# include <string>
using namespace std;
int main() {
    string n;
    int k;
    int m;
    string a="";
    cin >> n;
    cin >> k;
    cin >> m;
    for (int i=(k-1);i<m;i+=1)
        {
            a+=n[i];
        }

    cout << a;
    return 0;
}
*/


//4
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float kg;
    float m;
    cin >> kg;
    cin >> m;
    float imt=kg/(m*m);
    cout << fixed << setprecision(1) << imt;
    return 0;
}
*/


//5
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x2=n;
    string x_2="";
    int x8=n;
    string x_8="";
    int x16=n;
    string x_16="";
    string sim="0123456789ABCDEF";
    while (x2>0){
        x_2 = char((x2 % 2) + '0') + x_2;
        x2/=2;
    }
    while (x8>0){
        x_8 = char((x8 % 8) + '0') + x_8;
        x8/=8;
    }
    while (x16>0){
        x_16 = sim[x16%16] + x_16;
        x16/=16;
    }
    if (n==0){
        x_2="0";
        x_8="0";
        x_16="0";

    }
    cout << x_2<<endl<< x_8<<endl<<x_16;
    return 0;
}
*/
#6
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int bykvi=0;
    int cif=0;
    int probel=0;
    int znaki=0;
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
        else {
            znaki+=1;
        }
        i+=1;
    }
        
    cout << "Буквы: " << bykvi << endl
     << "Цифры: " << cif << endl
     << "Пробелы: " << probel << endl
     << "Знаки препинания: " << znaki;
    return 0;
}
*/



//7
#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int den;
    int mes;
    int god;
    cin >> den;
    cin >> mes;
    cin >> god;

    time_t now = time(0);
    tm* t = localtime(&now);

    int tekDen = t->tm_mday;
    int tekMes = t->tm_mon + 1;
    int tekGod = t->tm_year + 1900;

    int vozrast = tekGod - god;

    if (tekMes < mes || (tekMes == mes && tekDen < den)) {
        vozrast -= 1;
    }

    cout << "Возраст: " << vozrast;

    return 0;

}