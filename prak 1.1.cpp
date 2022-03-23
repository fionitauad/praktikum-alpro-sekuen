#include <iostream>
#include <conio.h>
using namespace std;
class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
public:
	Hitung();
	void hitung_jumlahnya() {jumlah = (a+b+c);
	}	
private:
	int a,b,c;
	int jumlah;
};

Hitung::Hitung(){
	cout<<"program menghitung jumlah 3 integer \n";
	cout<<"selamat berkarya \n";

}

istream& operator>> (istream& in, Hitung& masukkan){
	cout<<"masukkan nilai a :";
	in>> masukkan.a;
	cout<<"masukkan nilai b :";
	in>> masukkan.b;
	cout<<"masukkan nilai c :";
	in>> masukkan.c;
	return in;
}
ostream& operator<<(ostream& out, const Hitung& keluaran){
	out<<"nilai a : "<< keluaran.a <<endl;
	out<<"nilai b : "<< keluaran.b<<endl;
	out<<"nilai c : "<< keluaran.c<<endl;
	out<< "jumlah 3 integer diatas : " <<keluaran.jumlah<<endl;
	return out;
}

main(){
	Hitung x;
	cin>>x;
	x.hitung_jumlahnya();
	cout<<x;
	getch();
	return 0;
	
};
