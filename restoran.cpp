#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
    long harga,biaya,diskon,grandtotal,bayar,kembalian;

    int jumlah;

    char paket;

    cout<<"------------------------------------"<<endl;

    cout<<"resto langit"<<endl;

    cout<<"-----------------------------------"<<endl;

    cout<<"Menu Paket:                        "<<endl;

    cout<<"A. Nasi goreng+jus                "<<endl;

    cout<<"B. Nasi bebek+jus                 "<<endl;

    cout<<"C. Nasi Ayam+jus                   "<<endl;

    cout<<" Tipe kamar [A/B/C]= "; cin>>paket;

    cout<<"jumlah                    = "; cin>>jumlah;

    switch(paket)

    {
    case 'A':
    case 'a' :

        harga=28000;

        break;

    case 'B':
    case 'b':

        harga=240000;

    case 'C' :
    case 'c' :

        harga=27000;

        break;

    }

    biaya=harga*jumlah;

    grandtotal=biaya-diskon;

    cout<<"----------------------------------------------"<<endl;

    cout<<"WARUNG KITA"<<endl;

    cout<<"----------------------------------------------"<<endl;

    cout<<"RINCIAN PEMBAYARAN:                           "<<endl;

    cout<<"Menu Paket ="<<paket<<endl;

    cout<<"Jumlah     ="<<jumlah<<endl;

    cout<<"Biaya      ="<<biaya<<endl;

    cout<<"Diskon 5%  ="<<diskon<<endl;

    cout<<"           ----------"<<endl;

    cout<<"Grand Total = "<<grandtotal<<endl;

    cout<<"Bayar       ="; cin>>bayar;

    kembalian=bayar-grandtotal;

    cout<<"          ----------"<<endl;

    cout<<"Uag Kembalian = "<<kembalian<<endl;

    getch();

    }

