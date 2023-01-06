#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    int tipe_kamar, lama, harga_permalam, bayar, tsd, d; 
    string nama_kamar;
   
    cout<<"SISTEM INFORMASI PENYEWAAN KAMAR HOTEL ALFATIH"<<endl;
    cout<<"..........................................................."<<endl;

    cout<<"                  Daftar Jenis Kamar Dan Harga             "<<endl;

    cout<<"..........................................................."<<endl;



    cout<<" Tipe Kamar          Nama Kamar              Harga Permalam"<<endl;
    cout<<"     1                Tulip                   Rp. 500.000  "<<endl; 
    cout<<"     2                Teratai                 Rp. 1.000.000"<<endl; 
    cout<<"     3                Anggrek                 Rp. 1.500.000"<<endl; 
    cout<<"     4                Paviliun Rosalia        Rp. 2.000.000"<<endl; 
    cout<<"     5                Paviliun Cendana        Rp. 3.000.000"<<endl; 
    cout<<endl; 
    
    cout<<"Pilih Tipe Kamar : ";
    cin>>tipe_kamar; 

    if (tipe_kamar == 1){
        harga_permalam=500000;
        nama_kamar="Tulip"; 
    }
    else if (tipe_kamar == 2){
        harga_permalam=1000000;
        nama_kamar="Teratai";
    }
    else if (tipe_kamar == 3){
        harga_permalam=1500000;
        nama_kamar="Anggrek";
    }
    else if (tipe_kamar == 4){
        harga_permalam=2000000;
        nama_kamar="Paviliun Rosalia";
    }
    else if (tipe_kamar == 5){
        harga_permalam=3000000;
        nama_kamar="Paviliun Cendana";
    }
    
	cout<<"Berapa Malam Anda Menginap : ";
    cin>>lama;

    bayar=lama*harga_permalam;
    
    if (lama >= 1 && lama <= 3){
    	d = 0.1 * bayar;
	}
	
	if (lama >= 4 && lama <= 6){
    	d = 0.2 * bayar;
	}
	
	if (lama >= 6){
    	d = 0.3 * bayar;
	}
	    
    
    tsd = bayar - d;

    cout<<endl;
    cout<<"Tipe Kamar Pilihan Anda : "<<tipe_kamar<<endl;
    cout<<"Nama Kamar Pilihan anda : "<<nama_kamar<<endl;  
    cout<<"Harga Permalam Rp.   : "<<harga_permalam<<"/malam"<<endl;
    cout<<"Lama Penyewaan   : "<<lama<<" hari"<<endl; 
    cout<<"Harga Sebelum Diskon : Rp. "<<bayar<<endl;
    cout<<"Harga Diskon : Rp. "<<d<<endl;
    cout<<"Total Harga yang harus dibayar : Rp. "<<tsd<<endl;
    
    string input;
    cout<<"Anda ingin memilih tipe kamar lagi [Y/T] : ";
    cin>>(input);
    if (input == "Y" || input == "y"){
    	main();
	}
	else {
		cout<<"Terima Kasih, Anda telah melakukan pemesanan kamar pada Hotel Alfatih";
	}
}









