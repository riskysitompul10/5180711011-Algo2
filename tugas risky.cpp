#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int jumlah, ketemu = 0, indeks;
    string  B[10],  ganti, hapus, cari;
    bool status = false;
ulangi:


	cout << "Masukkan jumlah data : ";
	cin >> jumlah;


	if (jumlah > 9 )
	{

		cout << "\nMaaf, max jumlah data adalah 10!\n\n";


		goto ulangi;
	}
	else
	{

		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : ";
			cin >> B[i];
		}


		cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\nB[" << j << "]= " << B[j];
		}
	}


	cout << "\n\nMasukkan nilai data yang akan diubah = "; cin >> ganti;


	for (int g = 0; g<jumlah; g++)
	{
		if (B[g] == ganti)
		{

			cout << "Masukka nilai baru = "; cin >> B[g];
		}
	}


	cout << "\n\nData setelah diubah";
	for (int h = 0; h<jumlah; h++)
	{
		cout << "\nB[" << h << "]= " << B[h];
	}


	cout << "\n\nMasukkan nilai data yang akan dihapus = ";
	cin >> hapus;


	for (int j = 0; j < jumlah; j++)
	{
		if (hapus == B[j])cout << "Maaf data yang Anda cari tidak ada";
		{

			for (int k = j ; k < jumlah; k++)
			{

				B[k] = B[k + 1];
			}


			jumlah -= 1;
			break;
		}
	}



	cout << "\n\nData Baru :";
	for (int p = 0; p<jumlah; p++)
	{
		cout << "\nB[" << p << "]= " << B[p];
	}


	cout << "\n\nMasukkan nilai data yang akan dicari = "; cin >> cari;


	for (int n = 0; n<jumlah; n++) {
		if (cari == B[n]) {
        //if(cari==nama[i])
            {
                status= true;
                indeks=n;
            }

			cout << "\nNilai " << cari << " ditemukan pada index = " << n <<endl;
			ketemu = 1;
			break;
		}
	}
                system("CLS");
                if(status)
                cout << "data anda di-"<<indeks;
                else
                    cout<<"maaf data yang anda cari tidak ada";




	_getch();
}
