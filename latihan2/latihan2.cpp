#include<iostream>
using namespace std;

    int main(){

        int a,b,c,d;

        cout << "masukan bilangan 1: ";
        cin >> a;
        cout << "masukan bilangan 2: ";
        cin >> b;
        cout << "masukan bilangan 3: ";
        cin >> c;
        cout << "masukan bilangan 4: ";
        cin >> d;

        if (a>b && a>c && a>d)
            cout << "bilangan terbesar adalah: " << a <<endl;
       else if (b>a && b>c && b>d)
            cout << "bilangan terbesar adalah: " << b <<endl;
       else if (c>a && c>b && c>d)
            cout << "bilangan terbesar adalah: " << c <<endl;
       else
            cout << "bilangan terbesar adalah: " << d <<endl;
    }
