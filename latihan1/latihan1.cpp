#include<iostream>
using namespace std;

int main(){

    int A,B,C;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;
    cout << "masukan bilangan 3: ";
    cin >> C;

    if (A > B)  {
        if (A > C)
        cout << "bilangan terbesar adalah: " << A << endl;
        else
        cout << "bilangan terbesar adalah: " << C << endl;

   } else {
        if (B > C)
        cout << "bilangan terbesar adalah: " << B << endl;
        else
        cout << "bilangan terbesar adalah: " << C << endl;
    }


}
