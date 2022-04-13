#include <iostream>
using namespace std;

class Finansial
{
	public :
		void Tabungan();
		void Pengeluaran();
		int a, x;
		int uang_saku;

};

void Finansial ::Pengeluaran () 
{
	int total;
	float n;
	
	cout<<"Masukkan uang saku tiap bulannya : ";
	cin>>a;
	cout<<"Masukkan rentang waktu (bulan): ";
	cin>>x;
	for (int i=1; i<=x; i++)
	{
		cout<<"Pengeluaran bulan ke-"<<i<<" = ";
		cin>>n;
		total=total+n;
	}	
	
	cout<<endl <<"Total pengeluaran selama "<<x<<" Bulan = Rp."<<total <<endl;
};

void Finansial::Tabungan()
{
	int Jmlah, total;
	uang_saku = a*x;
	Jmlah = uang_saku - total;
	
	cout<<"Total uang saku = "<<uang_saku <<endl;
	cout<<"Total tabungan selama "<<x<<" bulan"<<" = "<<Jmlah;
}

int main()
{
	Finansial run;
	run.Pengeluaran();
	run.Tabungan();
	cout<<endl;
}
