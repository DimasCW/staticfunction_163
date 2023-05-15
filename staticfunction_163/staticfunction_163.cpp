#include<iostream>
#include<string>

using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;
	void setid();
	void printall();
	mahasiswa(string pnama) :nama(pnama) { setid(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setid() {
	id = ++nim;
}

void mahasiswa::printall() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}


