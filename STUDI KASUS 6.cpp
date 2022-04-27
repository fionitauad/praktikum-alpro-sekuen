#include <iostream>
using namespace std;

class nilai{
	public:
		string nama, mk;
    int jumlah = 0;
		int n,nilai[100],maks, min,rata;

  void input();
  void proses();
  void output();
};

void nilai::input(){
	cout<<"Nama Dosen : ";
	cin>>nama;
	cout<<"Mata Kuliah : ";
	cin>>mk;
	cout<<"Banyaknya nilai yang diinputkan : ";
	cin>>n;
}

void nilai::proses(){
	for (int i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>nilai[i];
           jumlah = jumlah + nilai[i];
        }
    rata=jumlah/n;
    
	maks = nilai[0];
	for(int i = 0; i < n; i++) {
    	if (nilai[i] > maks)  {
			maks = nilai[i];
    	}
	}
	
	min = nilai[0];
	for(int i = 0; i < n; i++) {
		if (nilai[i] < min)  {
			min = nilai[i];
    	}
	}
}

void nilai::output(){
	cout << "Nilai Rata-rata = " << rata << endl;
	cout << "Nilai maksi>mum adalah " << maks << endl;
	cout << "Nilai minimum adalah " << min << endl;
}

int main(){
  nilai X;
  X.input();
  X.proses();
  X.output();
}
