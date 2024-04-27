#include <iostream>

using namespace std;

int main() {
    int nomor_punggung;

    cout << "Masukkan nomor punggung: ";
    cin >> nomor_punggung;

    cout << "Nomor punggung " << nomor_punggung << " dapat mewakili posisi: ";

    if (nomor_punggung % 2 == 0) {
        cout << "Target attacker, ";
    }

    if (nomor_punggung >= 50 && nomor_punggung <= 100 && nomor_punggung % 2 == 0) {
        cout << "Capten team, ";
    }

    if (nomor_punggung % 2 != 0) {
        cout << "Defender, ";
    }

    if (nomor_punggung > 90 && nomor_punggung % 2 != 0) {
        cout << "Playmaker, ";
    }

    if (nomor_punggung % 2 != 0 && (nomor_punggung % 3 == 0 || nomor_punggung % 5 == 0)) {
        cout << "Keeper, ";
    }

    cout << endl;

    return 0;
}
