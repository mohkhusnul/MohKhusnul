#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int i, jumlah, angka[100]; 
	float x,total, pangkat[i], totalpangkat;
	

	cout << "berapa buah angka yang anda akan masukkan: ";cin>>jumlah;
	for (i=0; i<jumlah; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];
		total = total+angka[i];
		pangkat[i]=pow(angka[i],2); //mengalikan nilai dengan nilai itu sendiri sebanyak pangkatnya 
		totalpangkat = totalpangkat+pangkat[i];
	}
	x = pow(total,2);
	cout << "standar deviasinya yaitu = " << sqrt((jumlah*totalpangkat-x)/(jumlah*(jumlah-1)))<< endl;//mencari nilai dasarnya
	return 0;
	getch();
}
