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
}a;
int main(){
	int pilihan;
	cout <<"1. Penjumlahan"<<endl;
	cout <<"2. Perkalian"<<endl;
	cout <<"3. Pembagian"<<endl;
	cin >>pilihan;
	switch (pilihan){
		case 1:{
			a.penjumlahan();
			break;
		}
	}
}
