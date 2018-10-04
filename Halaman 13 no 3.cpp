#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
    char nama[15];
    int  a,b,ulang;
    cout<<"Masukkan Kata    : ";
    cin>>nama;

    ulang=strlen(nama);ulang--;

    for(a=ulang;a>=0;a--)
    {
    	for(b=0;b<=ulang;b++)
       	{cout<<nama[b];}
       	cout<<endl;ulang--;
    }
    getch();
    return 0;
}
