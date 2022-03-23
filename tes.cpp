#include<iostream>
#include<conio.h>
#include <fstream>
using namespace std;

int harga,bayar,biaya,kembalian,kode,nilai,jmlh,byr,kbl,tot,diskon,totbyr;
char paket,jwb;

int totalharga(int tot)
{
	tot=nilai*jmlh;
	if(tot>45000){
		diskon=0.1*tot;
	}
	totbyr=tot-diskon; 
}

int main(){
	menu:
	cout<<"\t\tMenu Makanan"<<endl;
	cout<<"\t\tKedai Ayam"<<endl;
	cout<<endl;
		
	cout<<"1. Ayam Goreng"<<endl;
	cout<<"2. Ayam Bakar"<<endl;
		
		in: cout<<"Silahkan Masukkan Pilihan Anda : ";
		cin>>kode;
		
		switch(kode){
			case 1:
				cout<<"Ayam Goreng"<<endl;
				nilai=17000;
				cout<<"Masukkan Jumlah Porsi : ";
				cin>>jmlh;
				totalharga(tot);
				
				
				cout<<"Masih Ada yang Ingin Ditambahkan? Y/T : ";
				cin>>jwb;
				if(jwb=='y'){
					goto menu;
				}
				else if(jwb=='t'){
					goto end;
				}
				
			case 2:
				cout<<"Ayam Bakar"<<endl;
				nilai=21000;
				cout<<"Masukkan Jumlah Porsi : ";
				cin>>jmlh;
				totalharga(tot);
				cout<<"Total Harga : Rp."<<totalharga(tot)<<endl;
				cout<<"Bayar : Rp.";
				cin>>byr;
				kbl=byr-totalharga(tot);
				cout<<"Kembalian : Rp."<<kbl <<endl <<endl;
				
				cout<<"Masih Ada yang Ingin Ditambahkan? Y/T : ";
				cin>>jwb;
				if(jwb=='y'){
					goto menu;
				}
				else if(jwb=='t'){
				}
				
				break;
				
				default:
					cout<<"Menu yang Dipilih Tidak Tersedia";
		}
		
	
	
	end:
			cout <<"Total Harga : Rp."<<totalharga(tot)<<endl;
			cout <<"Bayar : Rp.";
				cin>>byr;
				kbl=byr-totalharga(tot);
				cout <<"Kembalian : Rp."<<kbl <<endl <<endl;
		ofstream varfile;
		varfile.open("struk.txt");
		if (varfile == NULL){
			cout << "file fail to open";
		}else{
			
			varfile << "\nstruk menu\n";
			varfile <<"Total Harga : Rp."<<totalharga(tot)<<endl;
			varfile <<"Bayar : Rp." ; 
		    varfile << byr <<endl;
	     	varfile <<"Kembalian : Rp."<<kbl <<endl <<endl;
	     	varfile.close();
		}
		

}
