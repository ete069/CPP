#include <iostream>
using namespace std;

void spasi(int n){
    if (n <= 0) return;
    cout << ' ';
    spasi(n - 1);
}

void bintang(int n){
    if (n <= 0) return;
    cout << '*';
    bintang(n - 1);
}

void bariss(int baris, int total){
    spasi(total - baris);
    bintang(baris);
    cout << '\n';
}

void segitiga(int total, int d = 1){
    if (d > total) return;
    bariss(d, total);
    segitiga(total, d + 1);
}

int main(){
    int n;
    cout << "== Segitiga Rekursif ==" << endl;
    cout << "Masukkan tinggi segitiga : ";
    if (!(cin >> n)) return 0;
    if (n <= 0) return 0;
    segitiga(n);
    return 0;
}