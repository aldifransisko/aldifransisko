#include <iostream>
#include <string.h>
using namespace std;
main()
{
int si, Rusuk, hasil, P, L, T, r, A;
char pilihan, ulang;
const float phi = 3.142857;

 do{

 
cout<<"TUGAS PEMOGRAMAN TERSTRUKTUR"<<endl;
cout<<"=======KELOMPOK_8======="<<endl;
cout<<"========================="<<endl;
cout<<"NAMA ANGGOTA KELOMPOK"<<endl;
cout<<"1. ALDI FRANSISKO"<<endl;
cout<<"2. ONGKI"<<endl;
cout<<"========================="<<endl;
    cout<<"\n MENGHITUNG VOLUME BANGUN RUANG DAN LUAS BANGUN DATAR \n"
             <<"1. VOLUME KUBUS \n"
             <<"2. VOLUME BOLA \n"
             <<"3. VOLUME LIMAS SEGI 4 \n"
             <<"4. menghitung luas persegi\n"
             <<"5. menghitung luas segitiga\n"
             <<"6. menghitung luas lingkaran\n"
             <<"Masukan pilihanmu (1-6) : ";
cin>>pilihan;
cout<<"==========================="<<endl;
 
 switch(pilihan)
 {
 
case '1':
cout<<"VOLUME KUBUS"<<endl;
cout<<"Masukan Panjang Sisi : ";
cin>>si;
hasil = si * si * si ;
cout<<"HASIL PERHITUNGAN VOLUME : "<<hasil<<endl <<endl;   
break;
  
case '2':
cout<<"VOLUME BOLA"<<endl;
cout<<"Masukan Panjang Rusuk : ";
cin>>r;
hasil = 4*3.14*r*r*r/3;
cout<<"HASIL PERHITUNGAN VOLUME : "<<hasil<<endl<<endl;
break;
 
case '3':
cout<<"VOLUME LIMAS SEGI 4"<<endl;
cout<<"Masukan Panjang  : ";
cin>>P;
cout<<"Masukan Lebar  : ";
cin>>L ;
cout<<"Masukan Tinggi  : ";
cin>>T;
hasil = P*L*T*1/3;
cout<<"HASIL PERHITUNGAN VOLUME : "<<hasil<<endl<<endl;
break;

case'4':
cout<<"Menghitung luas persegi"<<endl;
cout<<"Sisi = ";
cin>>si;
hasil = si*si;
cout<<"Luas persegi = "<<hasil<<endl<<endl;
break;

case'5':
cout<<"Menghitung luas segitiga"<<endl;
cout<<"Alas = ";
cin>>A;
cout<<"Tinggi = ";
cin>>T;
hasil = 0.5 * A * T;
cout<<"Luas segitiga = "<<hasil<<endl<<endl;
break;

case'6':
cout<<"Menghitung luas lingkaran"<<endl;
cout<<"Jari-jari = "; 
cin>>r;
hasil = phi * r * r;
cout<<"Luas lingkaran = "<<hasil<<endl<<endl;
break;
default :
   	
    cout<<"Pilihan anda tidak ada di sistem"<<endl;
    
    }
    
    cout<<"\nKembali ke menu utama ? (y/n) "; 
	cin>>ulang; 
	
	/*
	untuk      kembali ke dalam blok do-while
	*/

    }
	while(ulang == 'y' || ulang == 'Y'); 
   }
   
 
