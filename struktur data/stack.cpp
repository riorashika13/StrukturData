#include <iostream>
using namespace std;

//deklarasi variabel
int maksimal = 5;
string arrayData[5];
int top = 0;

bool isFull()
{
	if (top == maksimal)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if (top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void pushArray(string data)
{
	if (isFull)
	{
		cout << "Data penuh" << endl;
	}
	else
	{
		arrayData[top] = data;
		top++;
	}
}

void popArray()
{
	if (isEmpty())
	{
		cout << "Data kosong!!" << endl;
	}
	else
	{
		arrayData[top - 1] = "";
		top--;
	}
}

void peekArray(int posisi)
{
	if (isEmpty())
	{
		cout << "Data kosong!!" << endl;
	}
	else
	{
		int index = top;
		for (int i = 0; i < posisi; i++)
		{
			index--;
		}
		cout << "Data posisi ke-" << posisi << " : " << arrayData[index] << endl;
	}
}

int countArray()
{
	if (isEmpty())
	{
		return 0;
	}
	else
	{
		return top;
	}
}

void destroyArray()
{
	for (int i = 0; i < top; i++)
	{
		arrayData[i] = "";
	}
	top = 0;
}

void displayArray()
{
	if (isEmpty())
	{
		cout << "Data kosong!!" << endl;
	}
	else
	{
		cout << "Data stack array : " << endl;
		for (int i = maksimal - 1; i >= 0; i--)
		{
			if (arrayData[i] != "")
			{
				cout << "Data : " << arrayData[i] << endl;
			}
		}
		cout << "\n"
	         << endl;
	}
}

int main ()
{
	pushArray("Muhammad");
	pushArray("Abu Bakar Ash-shiddiq");
	pushArray("Umar bin Khattab");
	pushArray("Utsman bin Affan");
	pushArray("Ali bin Abi Thalib");
	displayArray();
	
	peekArray(3);
	cout << "Banak Data : " << countArray() << endl;
	cout << "\n"
	     << endl;
	     
	cout << "Apakah data full? " << isFull() << endl;
	pushArray("Abdurrahman bin Auf");
	popArray();
	displayArray();
	
	peekArray(3);
	cout << "Banyak Data : " << countArray() << endl;
	cout << "\n"
	     << endl;
	     
	cout << "Apakah data full?" << isFull() << endl;
	cout << "Apakah data kosong?" << isEmpty() << endl;
	
	destroyArray();
	// cek lagi setelah destroy berapa jumlah data? ataukah full /  kosong
	cout << "Banyak Data : " << countArray() << endl;
	cout << "Apakah data full? " << isFull() << endl;
	cout << "Apakah data kosong? " << isEmpty() << endl;
}
