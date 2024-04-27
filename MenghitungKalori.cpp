#include <iostream>

using namespace std;

int main() {
    int lari, pushup, plank;
    int total_kalori = 0;

    cout << "Masukkan jumlah waktu (dalam menit) untuk olahraga lari: ";
    cin >> lari;
    cout << "Masukkan jumlah waktu (dalam menit) untuk olahraga push-up: ";
    cin >> pushup;
    cout << "Masukkan jumlah waktu (dalam menit) untuk olahraga plank: ";
    cin >> plank;

   
    total_kalori += (lari / 5) * 60; 
    total_kalori += (pushup / 30) * 200; 
    total_kalori += plank * 5; 

    cout << "Total kalori yang terbakar setelah melakukan aktivitas olahraga adalah: " << total_kalori << " kalori." << endl;

    return 0;
}
