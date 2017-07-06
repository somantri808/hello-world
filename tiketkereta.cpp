#include <iostream>
using namespace std;
main ()
{
	long int stasiunAsal,stasiunKedatangan,wktu,kelas,jmlah,harga,MenuAtas;
char lanjut ,nama[60],alamat[30],hp[24],noKereta[4];
up :
{
	cout<<"===================================================="<<endl;  
    cout<<"Program Pemesanan Tiket Kereta API"<<endl;  
    cout<<"===================================================="<<endl;  
}
{
	MenuAtas:
	cout<<"No Kereta	: ";cin>>noKereta;
    cout<<"Nama : ";cin>>nama;  
    cout<<"No HP : ";cin>>hp;    
    cout<<"Alamat    : ";cin>>alamat; 
    
    stasiunAsal :
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Stasiun Asal"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"1.Bandung"<<endl;
	cout<<"2.Serang"<<endl;
	cout<<"3.Jakarta"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Pilihan Stasiun Asal [1-3]		: ";cin>>stasiunAsal;
	cout<<"----------------------------------------------------"<<endl;
   
    jrusan :
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Stasiun Kedatangan"<<endl;  
    cout<<"----------------------------------------------------"<<endl;
    cout<<"1.Surabaya"<<endl;
    cout<<"2.Jogjakarta"<<endl;
    cout<<"3.Cirebon"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Pilihan Stasiun Kedatangan [1-3]    : ";cin>>stasiunKedatangan;
    cout<<"----------------------------------------------------"<<endl;
    
	wktu :
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Waktu Keberangkatan"<<endl;  
    cout<<"----------------------------------------------------"<<endl;;
	cout<<"1.Pagi"<<endl;
	cout<<"2.Siang"<<endl;
	cout<<"3.Malam"<<endl;
	cout<<"4.Kembali Ke Menu sebelumnya"<<endl;
	cout<<"----------------------------------------------------"<<endl;
    cout<<"Pilihan Waktu Keberangkatan [1-4]    : ";cin>>wktu;
    cout<<"===================================================="<<endl;
    
	  if (wktu==4)
        { goto jrusan;}
	 cout<<"----------------------------------------------------"<<endl;
    cout<<"Kelas Kereta API"<<endl;  
    cout<<"----------------------------------------------------"<<endl;
    cout<<"1. Express"<<endl;
    cout<<"2. Bisnis"<<endl;
    cout<<"3. Ekonomi"<<endl;
    cout<<"4. Kembali Ke Menu sebelumnya"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Pilihan Kelas [1-4]    : ";cin>>kelas;
    cout<<"===================================================="<<endl; 
    cout<<endl;
        if (kelas==4)
        { goto wktu;}
	  cout<<endl;
    cout<<"Jumlah Pemesanan Tiket   : ";cin>>jmlah;
    cout<<"----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Jumlah Tiket yang di Pesan    : "<<jmlah<<" Tiket";
    cout<<endl;
      {
        if (kelas==1)
        {
            cout<<"Kelas Kereta Dipilih        : Express"<<endl;
            cout<<"Harga Satuan Tiket        : Rp60000"<<endl;
        }
        else if (kelas==2)
        {
            cout<<"Kelas Yang Dipilih        : Bisnis"<<endl;
            cout<<"Harga Satuan Tiket        : Rp35000"<<endl;
        }
        else
        {
            cout<<"Kelas Yang Dipilih        : Ekonomi"<<endl;
            cout<<"Harga Satuan Tiket        : Rp25000"<<endl;
        }
        }
          cout<<"===================================================="<<endl;
        {
        if (kelas==1)
        {harga=jmlah*60000;
        cout<<"Total Harga Tiket        : Rp "<<harga;}
        else if (kelas==2)
        {harga=jmlah*35000;
        cout<<"Total Harga Tiket        : Rp "<<harga;}
        else
        {harga=jmlah*25000;
        cout<<"Total Harga Tiket        : Rp "<<harga;}
        }
    cout<<endl;
    cout<<"===================================================="<<endl;
        cout<<endl;
        cout<<"Lanjutkan Untuk Proses Pemesanan [Y/T]: ";cin>>lanjut;
        if(lanjut=='Y' || lanjut=='y')
        {goto tkt;}
      else
        {goto up;}
    cout<<endl;
    tkt:
    cout<<"===================================================="<<endl;  
    cout<<"Resi Pemesanan Tiket Kereta API"<<endl;  
    cout<<"===================================================="<<endl;

	cout<<"No Kereta	: "<<noKereta<<endl;
    cout<<"Nama         : "<<nama<<endl;
    cout<<"Alamat       : "<<alamat<<endl;
          switch(stasiunAsal)
        {case 1:
         cout<<"Asal Stasiun            : Bandung"<<endl;
         break;
        case 2:
         cout<<"Asal Stasiun            : Serang"<<endl;
         break;
        case 3:
         cout<<"Asal Stasiun            : Jakarta"<<endl;
         break;
       
         }
	    switch(stasiunKedatangan)
        {case 1:
         cout<<"Stasiun Kedatangan            : Surabaya"<<endl;
         break;
        case 2:
         cout<<"Stasiun Kedatangan             : Jogjakarta"<<endl;
         break;
        case 3:
         cout<<"Stasiun Kedatangan             : Cirebon"<<endl;
         break;
       
         }
    
}
}