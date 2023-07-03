#include <iostream>
#include <string>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;	}
	int getX() {
		return x;
	}
	
	void setY(int b) {
		this->y = b;	}
	int getY() {
		return y;
	}
};
	class Lingkaran : public bidangDatar {
	public:
		string ukuran;
		float keliling;

		Lingkaran() {
			cout << "lingkaran dibuat \n";
		}
		void input(int a) {
			cout << "Masukkan jejari : ";
			cin >> a;
			setX(a);
		}

		float Luas(float a) {


			a = 3.14 * getX() * getX();
			cout << "Luas Lingkaran = " << a << endl;
			return 0;
		}

		float Keliling(float a) {

			a = 2 * 3.14 * getX();
			keliling = a;
			cout << "Keliling Lingkaran = " << a << endl;
			return 0;
		}

		void cekUkuran() {
			
			if (keliling > 40) {
				ukuran = "Besar";
				
			}
			if ( keliling > 20 && keliling <= 40) {
				ukuran = "Sedang";
				
			}
			if ( keliling <= 20) {
				ukuran = "Kecil";
				
			}

			cout << "Ukuran lingkaran adalah " << ukuran << endl;
			cout << endl;
			

		}
	 };



class Persegipanjang :public bidangDatar {
public:
	string ukuran;
	float keliling;

	Persegipanjang() {
		cout << "persegi panjang dibuat \n";
	}
	void input(int a, int b) {
		cout << "Masukkan panjang : ";
		cin >> a;
		setX(a);
		cout << "Masukkan lebar : ";
		cin >> b;
		setY(b);
	}

		

	float Luas(float a) {


		a = getX() * getY();
		cout << "Luas Persegi panjang = " << a << endl;
		return 0;
	}

	float Keliling(float a) {

		a = 2 * getX()+ 2 * getY();
		keliling = a;
		cout << "Keliling Persegi panjang = " << a << endl;
		return 0;
	}

	void cekUkuran() {
		if (keliling > 40) {
			ukuran = "Besar";
		}
		if (keliling > 20 && keliling <= 40) {
			ukuran = "Sedang";
		}
		if ( keliling <=20 ) {
			ukuran = "Kecil";
		}
		cout << "Ukuran Persegi panjang adalah " << ukuran << endl;
		cout << endl;
		
	}
	};





int main() {

	string ch;
	do {
		bidangDatar* bd;
		Lingkaran ling;
		bd = &ling;
		ling.input(0);
		ling.Luas(0);
		ling.Keliling(0);		ling.cekUkuran();				Persegipanjang psg;
		bd = &psg;
		psg.input(0,0);
		psg.Luas(0);
		psg.Keliling(0);		psg.cekUkuran();		cout << "Apakah anda ingin mengulang program ? Y / N"<< endl << " ";		cin >> ch;		cout << endl;	} while (ch == "Y" || ch == "y");		return 0;		}