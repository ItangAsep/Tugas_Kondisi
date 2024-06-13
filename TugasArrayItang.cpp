#include <iostream>
#include <algorithm> //untuk library sort
#include <string>
#include <vector> //untuk library vector

using namespace std;

//hapus angka serta titik pada data jadikan awalan yang dibaca berdasarkan huruf.
string hapusnomor(const string& str) {
	size_t i = 0;
	while (i < str.size() && isdigit(str[i])) {
		i++;
	}
	while (i < str.size() && str[i] == '.') {
		i++;
	}
	return str.substr(i);
}

//bandingkan huruf pada data 
bool bandingkan(const string& A, const string& B) {
	return hapusnomor(A) < hapusnomor(B);
}


int main() {
	string daerah[] = { "1.Jakarta", "2.Malang", "3.Surabaya", "4.Bandung", "5.Garut", "6.Depok", "5.Tangerang" };

	int jumlah = sizeof(daerah) / sizeof(daerah[0]);

	vector<pair<string, string>> daerahPairs;
	for (int i = 0; i < jumlah; i++) {
		daerahPairs.push_back(make_pair(daerah[i], hapusnomor(daerah[i])));
	}

	// Mengurutkan vektor pasangan menggunakan fungsi pembanding khusus
	sort(daerahPairs.begin(), daerahPairs.end(),
		[](const pair<string, string>& a, const pair<string, string>& b) {
			return a.second < b.second;
		});

	// Menyusun kembali array dengan angka yang benar
	for (int i = 0; i < jumlah; i++) {
		daerah[i] = to_string(i + 1) + daerahPairs[i].first.substr(daerahPairs[i].first.find('.'));
	}

	for (int i = 0; i < jumlah; i++) {
		cout << daerah[i] << endl;
	}
	return 0;
}
