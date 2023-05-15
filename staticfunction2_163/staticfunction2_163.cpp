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
	static int getnim() { return nim; /*definisi function*/ }
	mahasiswa(string pnama) :nama(pnama) { setid(); }

};

int mahasiswa::nim = 0;

void mahasiswa::setid() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setnim(9);
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wandono");

	mhs1.printall();
	mhs2.printall();
	mhs3.printall();
	mhs4.printall();

	cout << "akses dari luar object = " << mahasiswa::getnim() << endl;
	system("pause");

	return 0;

}

