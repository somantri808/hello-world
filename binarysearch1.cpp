#include <iostream>
 
using namespace std;
 
int binary_s(int array[], int size, int elemen);
 
int main()
{
    int size=10;
    int data[10]={2, 3, 5, 6, 12, 44, 56, 65, 73 ,81} ;
    cout<<"Data Array"<<endl;
    int i;
    for(i=0;i<size;i++)
        cout<<data[i]<<"  ";
    cout<<endl<<"masukkan data yang ingin anda cari: ";
    int cari;
    cin>>cari;
	
    // pencarian
    int hasil;
    hasil = binary_s(data, size, cari);
    if (hasil==0)
        cout<<"Nilai tidak ditemukan";
    else
        cout<<"Nilai ditemukan";
}
 
int binary_s(int array[], int size, int elemen)
{
    int awal = 0;
    int akhir = size-1;
    int nilaiTengah = (awal+akhir)/2;
    while (nilaiTengah<=size  && awal<=akhir)
    {
          nilaiTengah = (awal+akhir)/2;
          if (array[nilaiTengah]==elemen)
              return 1;
          else if (elemen<array[nilaiTengah])
              akhir = nilaiTengah-1;
          else
              awal = nilaiTengah+1;
    }
    return 0;
}