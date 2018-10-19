# Praktikum2

##Latihan1.cpp Menghitung bilangan terbesar dari 3 bilangan

**Alur algoritma**
1. Mendeklarasikan variabel int A, B, C sebagai variabel input
2. Membaca input dari keybord cin int A >> B >> C
3. Membandingkankan nilai variabel **A** dan **B**
4. Kondisi **True** maka bandingan nilai variabel **A** dengan **C**
5. Kondisi **False** maka bandingkan nilai variabel **B** dengan **C**

**Flowchart Program** 
https://github.com/raizafahra/praktikum2/blob/master/latihan1/flowchart1.png

**Gambar program**
https://github.com/raizafahra/praktikum2/blob/master/latihan1/gambar1.png


**Code Program Lengkap:**
```C++
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
```

###Latihan2.cpp : Menghitung bilangan terbesar dari 4 bilangan

**Alur algoritma**
1. Mendeklarasikan variabek int A, B, C, D sebagai variabel input
2. Membaca input dari keyboard cin A >> B >> C >> D
3. Membandingkan nilai variabel **A** dengan **B**
4. Kondisi **True** maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **True** maka bandingkan nilai variabel **C** dengan **D**
6. Kondisi **False** maka bandingkan nilai variabel **B** dengan **C**

**Flowchart Program**
https://github.com/raizafahra/praktikum2/blob/master/latihan2/flowchart2.png

**Gambar program**
https://github.com/raizafahra/praktikum2/blob/master/latihan2/gambar2.png


**Code program lengkap**
```
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
 ```