#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char nama[20];
	int diskonblj,jumlah1,jumlah2,hrgongkir;
	string menu[20];
	int banyak, kode, porsi[20], harga[20], ongkir, diskon_ongkir; 
	int  total_ongkir, total_blj;
	int
	 subtotal[10], jumlah, diskon, total, bayar, jarak;
	
	menu :
	cout<<"\t Daftar Menu kedai X "<<endl;
	cout<<"-----------------------"<<endl;
	cout<<" 1. Ayam Geprek \t | Rp. 21.000,-"<<endl;
	cout<<" 2. Ayam Goreng \t | Rp. 17.000,-"<<endl;
	cout<<" 3. Udang Goreng \t | Rp. 19.000,-"<<endl;
	cout<<" 4. Cumi Goreng \t | Rp. 20.000,-"<<endl;
	cout<<" 5. Ayam Bakar   \t | Rp. 25.000,-"<<endl;
	cout<<"\n------------------------------------"<<endl;
	
	cout<<"Nama customer : ";
	cin>>nama;
	cout<<"Banyak pesanan : ";
	cin>>banyak;
	
	for(int i=1; i<=banyak; i++)
   {
     	cout<<"Pesanan Ke- "<<i<<endl;
      cout<<"Masukkan nomor kode menu : ";
		cin>>kode;
      cout<<"Jumlah Porsi : ";
		cin>>porsi[i];
 
      if (kode==1)
		{
         menu[i]="Ayam geprek";
         harga[i]=21000;
		}
      else if (kode==2)
		{
         menu[i]="Ayam goreng";
         harga[i]=17000;
     	}
      else if (kode==3)
		{
         menu[i]="Udang goreng";
         harga[i]=19000;
		}   
	  else if (kode==4)
		{
         menu[i]="Cumi goreng";
         harga[i]=20000;
     	}
	  else if (kode==5)
		{
         menu[i]="Ayam Bakar";
         harga[i]=25000;  
		}
      else
        {
			cout<<"Salah!!,Input Kode Lagi!!"<<endl;
         goto menu;
		}
	}
	
	cout<<"\nMasukkan jarak rumah dari kedai (m) :  ";
	cin>>jarak;
	if(jarak<=3000)
	{
		ongkir=15000;
	}
	else if(jarak>3000)
	{
		ongkir=25000;
	}
	
	ofstream struk;
	struk.open("struk.txt");
	if (struk == NULL)
	{
		struk<<"file tidak bisa dibuka";
	} 
	else
	{
		struk<<"\n\t\t STRUK Pemesanan Makanan "<<endl;
		struk<<"\t\t\t KEDAI X "<<endl;
		struk<<"==================================================="<<endl;
		struk<<"Nama Customer :"<<nama<<endl;
		struk<<"Jarak rumah - kedai : "<<jarak<<endl;
		struk<<"---------------------------------------------------"<<endl;
		struk<<"No.\tMenu \t\tHarga \t Porsi \t Subtotal"<<endl;
	
		for (int i=1; i<=banyak; i++)
		{
			subtotal[i] = porsi[i] * harga[i];
			jumlah+=subtotal[i];
	
			struk<<i<<" \t"<<menu[i]<<"\t"<<harga[i]<<" \t "<<porsi[i]<<"\t "<<subtotal[i]<<endl; 
		}
		struk<<"---------------------------------------------------"<<endl;
	
		
		
		if (jumlah > 25000 && jumlah <= 50000)
		{
		 diskon_ongkir=3000;
		}
		else if(jumlah>50000)
		{
			diskon_ongkir=5000;
			diskonblj=jumlah * 0.15;
		}

		int hrgongkir = 15000;
		jumlah1= jumlah - diskonblj;
		jumlah2= hrgongkir - diskon_ongkir;
		total= jumlah1 + jumlah2;
		
		struk<<"\t Jumlah belanja \t\t: Rp."<<jumlah<<endl;
		struk<<"\t Diskon Belanja   \t\t: Rp."<<diskonblj<<endl;
	
		struk<<"\t Diskon ongkir \t\t\t: Rp."<<diskon_ongkir<<endl;
		struk<<"\t harga ongkir \t\t\t: Rp."<<hrgongkir<<endl;
		struk<<"\t jumlah total bayar  \t\t: Rp."<<total<<endl;

	

		
		struk<<"\n\n\t~Terimakasih telah berkunjung ke kedai X~";	
	}
}
				
	
	

