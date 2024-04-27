#include<iostream>

using namespace std;

int main() {
	cout << " Selamat Datang di Program penerimaan Program " << endl;
	cout << " Penilaian terbagi menjadi 2 yaitu test coding dan interview" << endl;

	char NilaiInt;
	int NilaiCod;

	cout << " Silahkan Masukan Nilai Codingan Peserta : ";
	cin >> NilaiCod;
	cout << " Silahkan Masukan Nilai Interview Peserta : ";
	cin >> NilaiInt;

	if ((NilaiInt == 'A' || NilaiInt == 'B') && (NilaiCod >= 60 && NilaiCod <=100)) {
		cout << " Selamat Kamu Berhasil Menjadi Calon Programmer";
	}
	else
	{
		cout << " Maaf Kamu Belum Berhasil Menjadi Calon Programmer ";
	}
}