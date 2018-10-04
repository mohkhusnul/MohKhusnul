#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int i, n, akhir, angka[20], tot;
	
	cout << "Masukan berapa jumlah angka ";cin>>n;
	
	for (i=0; i<n; i++)
	{
		cout<<"Masukkan angka ke-"<< i+1 <<":";cin>>angka[i];
		tot=tot+angka[i];
		akhir=tot/n;
	}
	cout<<"rata-rata dari angka yang dimasukkan adalah = "<<akhir<<endl;
	return 0;
	getch();
}
