#include <iostream>
using namespace std;

//perkalian matriks

int main()
{
	//deklarasi variabel
	int baris, kolom, matriksA[3][3], matriksB[3][3], jml = 0, hasil[3][3];
	cout << "############ PERKALIAN MATRIKS ############" << endl;
	cout << "############ Rashika Caesario Pravidika ##########" << endl;
	
	cout << "masukkan jumlah baris: ";
	cin >> baris;
	cout << "masukkan jumlah kolom: ";
	cin >> kolom;
	
	//cek apakah ordo sama
	if (baris == kolom)
	{
		// input elemen matriks A
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << "masukkan elemen matriks A baris ke " << i << " kolom ke " << j << " : ";
				cin >> matriksA[i][j];
			}
		}
		cout << endl;
		//tampilkan elemen matrik A
		cout << "=== ELEMEN MATRIKS A ===" << endl;
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << matriksA[i][j] << "\t";
			}
			cout << endl;
		}
		
		// input elemen matriks B
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << "masukkan elemen matriks B baris ke " << i << " kolom ke " << j << " : ";
				cin >> matriksB[i][j];
			}
		}
		cout << endl;
		
		//tampilkan elemen matriks B
		cout << "===== ELEMEN MATRIKS B =====" << endl;
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << matriksB[i][j] << "\t";
			}
			cout << endl;
		}
		
		// perkalian matriks A x B
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				for(int k = 0; k < baris; k++)
				{
					jml = jml + matriksA[i][k] * matriksB[k][j];
				}
				hasil[i][j] = jml;
				jml = 0;
			}
		}
		
		cout << endl;
		// tampilkan hasil perkalian matriks A dengan B
		cout << "===== HASIL PERKALIAN MATRIKS A X B =====" << endl;
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << " " << hasil [i][j] << " | ";
			}
			cout << endl;
		}
	}
}
