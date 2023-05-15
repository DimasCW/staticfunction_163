#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;
	void setid();
	void printall();
	static void setnim(int pnim) { nim = pnim; }
	mahasiswa(string pnama) :nama(pnama) { setid(); }

};

int mahasiswa::nim = 0;

void mahasiswa::setid() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}



