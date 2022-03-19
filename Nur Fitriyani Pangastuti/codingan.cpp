#include <iostream>
using namespace std;

int main ()
{
	float angka1, angka2, hasil;
	int menu;
	char pilih;
	
	cout<<"=====KALKULATOR SEDERHANA====="<<endl<<endl;
	cout<<"Menu Kalkulator Sederhana"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;

	y:
	cout<<"Pilih Menu : ";cin>>menu;
	cout<<"============================"<<endl;
	if (menu==1)
	{
		cout<<"Penambahan"<<endl;
		cout<<"Masukan Angka Pertama : ";cin>>angka1;
		cout<<"Masukkan Angka Kedua : ";cin>>angka2;
		hasil=angka1+angka2;
		cout<<"Hasil "<<angka1<<" + "<<angka2<<" = "<<hasil;
	}
	else if (menu==2)
	{
		cout<<"Pengurangan"<<endl;
		cout<<"Masukkan Angka Pertama : ";cin>>angka1;
		cout<<"Masukkan Angka Kedua : ";cin>>angka2;
		hasil=angka1-angka2;
		cout<<"Hasil "<<angka1<<" - "<<angka2<<" = "<<hasil;
	}
	else if (menu==3)
	{
		cout<<"Perkalian"<<endl;
		cout<<"Masukkan Angka Pertama : ";cin>>angka1;
		cout<<"Masukkan Angka Kedua : ";cin>>angka2;
		hasil=angka1*angka2;
		cout<<"Hasil "<<angka1<<" * "<<angka2<<" = "<<hasil;
	}
	else if (menu==4)
	{
		cout<<"Pembagian"<<endl;
		cout<<"Masukkan Angka Pertama : ";cin>>angka1;
		cout<<"Masukkan Angka Kedua : ";cin>>angka2;
		hasil=angka1/angka2;
		cout<<"Hasil "<<angka1<<" / "<<angka2<<" = "<<hasil;
	}
	
	cout<<"\n====================================="<<endl;
	cout<<"Ingin Menghitung ulang (Y) Atau Berhenti (T) : ";cin>>pilih;
	if (pilih=='Y')
	{
		goto y;
	}
	else if (pilih=='T')
	{
		cout<<"===BAIK TERIMA KASIH===";
	}
	
	return 0;
}
