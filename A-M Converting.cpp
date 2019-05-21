#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(),login(),header(),menu(),kurs(),informasi(),selesai1(),selesai2(),salah(),ka(),ka2(),ka3();
int welcome(),konversi(),opsi;

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

main()
{
    MessageBox(NULL,"ENJOY OUR PROGRAMS","A-M Converting",MB_ICONINFORMATION | MB_OK);

    system("color b");
    welcome();
    login();
    while(4)
    {
        menu();
        switch(opsi)
        {
            case 1:
                kurs();
                break;

            case 2:
                konversi();
                break;

            case 3:
                informasi();
                break;

            case 4:
                selesai1();
                exit (0);
                break;

            default:
                salah();
                break;
        }
    }
}

void login()
{
    system("cls");
    header();
    string user, pass ;
    cout<<"Silahkan login dengan username : admin, dan password : admin"<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|                  LOGIN FORM                     |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tUsername       : ";cin>>user;
    cout<<"\t\tPassword       : ";cin>>pass;
    cout<<endl<<endl;
    if(user=="admin" && pass=="admin")
    {
        cout<<"---------------------------LOGIN BERHASIL, SELAMAT DATANG--------------------------";Sleep(2000);
        system("cls");
    }
    else if(user=="ADMIN" && pass=="ADMIN")
    {
        cout<<"---------------------------LOGIN BERHASIL, SELAMAT DATANG--------------------------";Sleep(2000);
        system("cls");
    }
    else
    {
        cout<<"-----------LOGIN GAGAL, SILAHKAN MASUKKAN USERNAME DAN PASS YANG SESUAI------------";
        _getch();
        system("cls");
        login();
    }
}

int welcome()
{
    int n,j;
    for(n=0;n<67;n++)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t PLEASE WAIT A MOMENT...";
		gotoxy(50,12);cout<<"LOADING "<< n+33<<" %";
        gotoxy(25,13);cout<<"------------------------------------------------------------------";
        gotoxy(25,14);cout<<"";
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        gotoxy(25,15);cout<<"------------------------------------------------------------------";
        system("cls");
    }
    gotoxy(30,10);cout<<"              WELCOME TO A-M CONVERTING ";
    gotoxy(30,12);cout<<"|----------------------------------------------------|";
	gotoxy(30,13);cout<<"|                   CREDITS TO:                      |";
	gotoxy(30,14);cout<<"|----------------------------------------------------|";
	gotoxy(30,15);cout<<"|    ALANG MULYA L                  1810631170074    |";
	gotoxy(30,16);cout<<"|    MIDA CHOERUNISA                1810631170073    |";
	gotoxy(30,17);cout<<"|----------------------------------------------------|";
	gotoxy(30,18);cout<<"Tekan Enter Untuk Lanjut..";
	cin.get();
	return 0;
}

void header()
{
    system("cls");
    gotoxy(0,0);cout<<"-----------------------------------------------------------------------------------";
    gotoxy(0,2);cout<<"                               WELCOME, BUDDY                                      ";
    gotoxy(0,3);cout<<"                          ENJOY OUR PROGRAM'S FEATURE                              ";
    gotoxy(0,5);cout<<"-----------------------------------------------------------------------------------"<<endl<<endl;
}

void menu()
{
    system("cls");
    header();
    cout<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|          PILIH FITUR YANG DI INGINKAN           |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 1. KURS RUPIAH HARI INI                         |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 2. PELUANG PERSENTASE                           |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 3. TENTANG KAMI                                 |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 4. KELUAR                                       |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\tMasukan Pilihan Anda [1/2/3/4] : ";cin>>opsi;
	fflush(stdin);
	cout<<endl;
}

void kurs()
{
    system("cls");
    header();
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|              KURS RUPIAH HARI INI                 |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|     MATA UANG    |     KODE       |   NILAI TUKAR |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|  POUND STERLING  |      GBP       |   18,561.55   |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|        EURO      |      EUR       |   16,173.95   |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|  DOLLAR AMERIKA  |      USD       |   14,434.00   |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t| DOLLAR SINGAPURA |      SGD       |   10,563.85   |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|    YUAN CHINA    |      CNY       |     2,099.15  |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|    YEN JEPANG    |      JPY       |       131.85  |"<<endl;
    cout<<"\t\t|                  |                |               |"<<endl;
    cout<<"\t\t|---------------------------------------------------|"<<endl;

    cout<<"\t\tTekan Enter Untuk Kembali ke Menu..";
	cin.get();
}

int konversi()
{
    long kj,ku;
    char nama[50],notlp[50],loket[50],*uk,*jns;
    float hrg,jml,ttl,ukemb,ubyr,pjk,ttlbyr;

    {
        ulang:
        kj:
        system("cls");
        header();
        cout<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                PILIH JENIS FITUR                |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|         1. PERSENTASE DARI SEBUAH NILAI         |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|         2. NILAI DARI SEBUAH PERSENTASE         |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|     3. JUMLAH DARI SUATU NILAI DAN PERSENTASE   |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                   4. KEMBALI                    |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;

        cout<<"\t\tMasukan Pilihan Anda [1/2/3/4/5] : ";cin>>kj;
        cout<<endl;
        if (kj==1)
        {
            ka();
        }
        else if (kj==2)
        {
            ka2();
        }
        else if (kj==3)
        {
            ka3();
        }
        else if (kj==4)
        {
            menu();
        }
        else
        {
            salah();
            _getch();
            system("cls");
            goto kj;
        }

    }
}

void ka(){
ka:
char lagi;
lagi:
system("cls");
float jumlah,nilai,persentase;
cout<<endl;
cout<<"\t           INPUT NLAI"<<endl;
cout<<"\t================================="<<endl;
cout<<"\t NILAI/VALUE               : ";cin>>nilai;
cout<<"\t JUMLAH POPULASI/SAMPEL    : ";cin>>jumlah;

persentase=(nilai/jumlah)*100;
cout<<"\t PERSENTASE ANDA ADALAH    : "<<persentase;
cout<<" %"<<endl<<endl<<endl;
ulang:
cout<<"\t[Y] Untuk mengulang perhitungan"<<endl;
cout<<"\t[C] Untuk kembali ke menu sebelumnya"<<endl;
cout<<"\t[T] Untuk kembali ke menu utama"<<endl;
cout<<"\t[X] Untuk mengakhiri program"<<endl<<endl;
cout<<"\t[Y/C/T/X] Masukan Pilihan: ";cin>>lagi;
     if (lagi=='Y' || lagi=='y')
        {
            goto lagi;
        }
        else if (lagi=='C' || lagi=='c')
        {
            konversi();
        }
        else if (lagi=='T' || lagi=='t')
        {
            menu();
        }
        else if (lagi=='X' || lagi=='x')
        {
            selesai2();
            exit(0);
        }
        else
        {
            cout<<"\tPilihan yang anda masukan salah, Silahkan ulangi kembali."<<endl<<endl;Sleep(1500);
            goto ulang;
        }
}

void ka2(){
ka2:
char lagi;
lagi:
system("cls");
float jumlah,nilai,persentase;
cout<<endl;
cout<<"\t           INPUT NLAI"<<endl;
cout<<"\t================================="<<endl;
cout<<"\t PERSENTASE PELUANG (%)    : ";cin>>persentase;
cout<<"\t JUMLAH POPULASI/SAMPEL    : ";cin>>jumlah;

nilai=(persentase/100)*jumlah;
cout<<"\t NILAI ANDA ADALAH         : "<<nilai;
cout<<endl<<endl<<endl;
ulang:
cout<<"\t[Y] Untuk mengulang perhitungan"<<endl;
cout<<"\t[C] Untuk kembali ke menu sebelumnya"<<endl;
cout<<"\t[T] Untuk kembali ke menu utama"<<endl;
cout<<"\t[X] Untuk mengakhiri program"<<endl<<endl;
cout<<"\t[Y/C/T/X] Masukan Pilihan: ";cin>>lagi;
     if (lagi=='Y' || lagi=='y')
        {
            goto lagi;
        }
        else if (lagi=='C' || lagi=='c')
        {
            konversi();
        }
        else if (lagi=='T' || lagi=='t')
        {
            menu();
        }
        else if (lagi=='X' || lagi=='x')
        {
            selesai2();
            exit(0);
        }
        else
        {
            cout<<"\tPilihan yang anda masukan salah, Silahkan ulangi kembali."<<endl<<endl;Sleep(1500);
            goto ulang;
        }
}

void ka3(){
ka3:
char lagi;
lagi:
system("cls");
float jumlah,nilai,persentase;
cout<<endl;
cout<<"\t           INPUT NLAI"<<endl;
cout<<"\t================================="<<endl;
cout<<"\t NILAI DARI SUATU PERSENTASE : ";cin>>nilai;
cout<<"\t PERSENTASE NILAI (%)        : ";cin>>persentase;

jumlah=(100/persentase)*nilai;
cout<<"\t JUMLAH NILAI ANDA ADALAH    : "<<jumlah;
cout<<endl<<endl<<endl;
ulang:
cout<<"\t[Y] Untuk mengulang perhitungan"<<endl;
cout<<"\t[C] Untuk kembali ke menu sebelumnya"<<endl;
cout<<"\t[T] Untuk kembali ke menu utama"<<endl;
cout<<"\t[X] Untuk mengakhiri program"<<endl<<endl;
cout<<"\t[Y/C/T/X] Masukan Pilihan: ";cin>>lagi;
     if (lagi=='Y' || lagi=='y')
        {
            goto lagi;
        }
        else if (lagi=='C' || lagi=='c')
        {
            konversi();
        }
        else if (lagi=='T' || lagi=='t')
        {
            menu();
        }
        else if (lagi=='X' || lagi=='x')
        {
            selesai2();
            exit(0);
        }
        else
        {
            cout<<"\tPilihan yang anda masukan salah, Silahkan ulangi kembali."<<endl<<endl;Sleep(1500);
            goto ulang;
        }
}

void informasi()
{
    system("cls");
    header();
    cout<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                    ABOUT US                     |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t| Established in 2019 as a Converting Application |"<<endl;
    cout<<"\t\t|   A-M Converting has successfully created an    |"<<endl;
    cout<<"\t\t|  Application to convert various kinds of value  |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|  Used for work purpose to convert a value that  |"<<endl;
    cout<<"\t\t|  Requires time efficiency. A-M Converting is a  |"<<endl;
    cout<<"\t\t|           Solution to these problems            |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tTekan Enter untuk Kembali ke Menu...";
	cin.get();
}

void selesai1()
{
	header();
	char x[]={"-------------------TERIMA KASIH ATAS FEEDBACK YANG ANDA BERIKAN-------------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
	MessageBox(NULL,"TERIMA KASIH TELAH MENGGUNAKAN APLIKASI KAMI","A-M Converting",MB_ICONINFORMATION | MB_OK);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
_getch();
}

void selesai2()
{
	header();
	char x[]={"-------------------TERIMA KASIH TELAH MENGGUNAKAN APLIKASI KAMI--------------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
_getch();
}

void salah()
{
    cout<<"---------------------------KODE YANG ANDA MASUKKAN SALAH---------------------------"<<endl<<endl;
    cout<<"-------------------------Klik Enter untuk Memasukkan Ulang-------------------------";
_getch();
}

