#include <iostream>
#include <string>

using namespace std;

int main() {
	int umur, tabungan;
	string nama, tt;

	cout << " Selamat datang di program untuk memprediksi keanggotan mafia seseorang " <<endl;

	cout << " silahkan masukan nama : ";
	getline(cin, nama);
	cout << " silahkan masukan tempat tinggal orang tersebut : ";
	getline(cin, tt);
	cout << " silahkan masukan umur nya : ";
	cin >> umur;
	cout << " Silahkan masukan perkiraan jumlah tabungan yang dimiliki : ";
	cin >> tabungan;


	if ((tt == "Nevada" || tt == "New York" || tt == "Havana") && (tabungan > 10000000) && (umur > 40)) {
		cout << nama << " Kemungkinan adalah seorang anggota mafia dengan pangkat Don \n";
	}
	else if ((tt == "New Jersey" || tt == "Manhattan" || tt == "Nevada") && (tabungan >= 1000000 && tabungan <= 2000000) && (umur >= 25 && umur <= 40))
	{
		cout << nama << " Kemungkinan adalah seorang anggota mafia dengan pangkat Under Boss\n";
	}
	else if ((tt == "California" || tt =="Detroit" || tt == "Boston") && (tabungan < 1000000) && (umur >= 18 && umur <=24)) {
		cout << nama << " Kemungkinan adalah seorang anggota mafia dengan pangkat Capo\n";
	}
	else
	{
		cout << nama << " Tidak mencurigakan";
	}
	return 0;
}