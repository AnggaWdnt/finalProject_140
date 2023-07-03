#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }
	
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	
	void input() {
		int setP;
		int setA;
		int setE;
		int setTA;

		while (true) {
			cout << "Program dibuat" << endl;

			cout << "Masukan nilai presesi: " << endl;
			cin >> setP;

			cout << "Masukan nilai Activity: " << endl;
			cin >> setA;

			cout << "Masukan nilai Exercise: " << endl;
			cin >> setE;

			cout << "Masukan nilai Tugas Akhir: " << endl;
			cin >> setTA;

			if (setTA >= 75);
			cout << "Selamat, anda lulus mata kuliah Pemrograman dengan nilai akhir 75" << endl;
		}
			else {
				cout << "Apakah anda ingin mengulang program? Y/N" << endl;
			}
		}
};

class pemrograman : public Matakuliah { //isi disini
public:
	void cekKelulusan() {
		int nilaiAkhir;
	};

	int main() {
		pemrograman pemrograman;
		pemrograman; input();
		pemrograman; cekKelulusan;

		return 0;

	}
};