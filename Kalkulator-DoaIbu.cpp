#include <iostream>
using namespace std;
class Kalkulator{
		public:
		double bilangana;
		double bilanganb;

void penjumlahan(){
	cout <<"Masukan angka:";
	cin >>bilangana;
	cout <<"Masukan angka:";
	cin >>bilanganb;
	cout <<"Hasil :"<<bilangana+bilanganb;
	}
void pembagian(){
	cout << "Masukkan angka yang mau dibagi : ";
	cin >> bilangana;
	cout << "Masukkan angka pembagi : ";
	cin >> bilanganb;
	cout << "Hasil : "<<bilangana/bilanganb;
	}
void pengurangan(){
	cout <<"Masukkan bilangan : ";
	cin >>bilangana;
	cout <<"Masukkan bilangan : ";
	cin >>bilanganb;
	cout << "hasil pengurangan : "<<bilangana-bilanganb;
	}

}a;

int main(){
	int pilihan;
	cout <<"1. Penjumlahan"<<endl;
	cout <<"2. Perkalian"<<endl;
	cout <<"3. Pembagian"<<endl;
	cout <<"4. Pengurangan"<<endl;
	cout <<"Pilih Metode :";
	cin >>pilihan;
	switch (pilihan){
		case 1:{
			a.penjumlahan();
			break;
		}
		case 3:{
			a.pembagian();
			break;
		}
		case 4:{
			a.pengurangan();
			break;
		}
	}
}
