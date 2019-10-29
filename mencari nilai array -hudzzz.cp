/* Program menghitung dan mencari nilai array 1D menggunakan procedure
 
 Nama : M. Hudzaifah Assyahid
 Date : 29/10/2019
 ver  : 0.0.0.1
 
 */
#include<iostream>
#include<stdlib.h>
using namespace std;

//Kumpulan Procedure Dan Fungsi Yang Di panggil
void iA(int n, int a[]);
void pA(int n, int a[]);
bool sA ( int i, int a[], int x, int n, int zz[], int zy[]);
//void cA ( int n, int x, int a[], int i, bool sAsA, int zz[], int zy[]);
void tA ( int n, int x, int a[], int i, bool aa, int zz[], int zy[]);
void tutup();
void nanyaCari();


int main()
{
    int n=0,a[n],x,zz[0],zy[0],i=0;
    bool aa;
    
    cout << "Masukan banyak array : ";
    cin >> n;
    
    //////////////////////////////////////////////////////////
                                                        /////////
    iA (n,a);                                           ///////////
    pA (n,a);                                           /////////////// // Procedure
                                                        //////////
    nanyaCari();                                        ////////
    /////////////////////////////////////////////////////////
    
    cout << "Masukan Angka Yang Ingin Dicari = ";
    cin >> x;
    
    ////////////////////////////////////////////////////////
                                                        ////////////
    aa = sA (i,a,x,n,zz,zy); //fungsi                         //////////////
                                                                //////////////
    tA (n,x,a,i,aa,zz,zy);                                                  ////  //Procedure & fungsi
                                                                /////////////
    tutup();                                            /////////////
                                                        //////////
                                                        //////////
    /////////////////////////////////////////////////////////
    
    return 0;
}

//Procedure Pertama Meminta input user dengan pengulangan sebanyak Array N yang di masukan user
void iA(int n, int a[])
{
    int i=0;
    while (i<n)//pengulangan input
    {
        cout << "Masukan Array ke = " << i << " = Adalah : ";
        cin >> a[i];
        
        i++;
    }
}

//Procedure Print Array untuk menampilkan semua nilai array yang tadi di masukan user
void pA(int n, int a[])
{
    cout << " Berikut Adalah Hasil Array Yang Tadi Telah Dimasukan : \n" <<
            " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^   \n" <<
            "       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n" <<
            "             ^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n";
    
    int i = 0;
    while(i<n)//pengulangan print
    {
        cout << "Array ke = " << i << " = Adalah : " << a[i] << endl;
        
        i++;
    }
}

//salah atau tidak. menengecek ada atau tidak nilai array yang ingin di cek oleh user melaluin input X
bool sA ( int i, int a[], int x, int n, int zz[], int zy[])
{
    bool sAsA = false;
    
    for( i=0; i<n; i++)//pengulangan ngecek X didalam nilai array a[]
    {
        if ( x == a[i])
        {
            sAsA = true;
            
        }
        
        
    }
    
    
    return sAsA;
}

//tangkapAlamat. Procedure untuk mendapatkan Alamat index Array
void tA ( int n, int x, int a[], int i, bool aa, int zz[], int zy[])
{
    if (aa == true)//mengubah kata true dalam boolean menjadi kata "ketemu"
    {
        cout << "Ketemu " << endl;
        
        for(i=0; i<n; i++) //pengulangan untuk cek nilai array
        {
            if (a[i] == x)
            zz[i] = i;
        }
        
        cout << "Angka " << x << " Ketemu di alamat index : \n";
        for(i=0; i<n; i++) //pengulangan untuk menampilkan alamat array yang ketemu
        {
            if (a[i] == x)
            {
                cout << "index ke = " << zz[i] << " dan ke \n";
            }
        }
    }
    else //jika tidak ketemu maka akan default ke nilai index = -99
    {
        zz[0] = -99;
        cout << "Angka " << x << " Tidak ketemu di index = " << zz[0] << endl;
    }
    cout << "Selesai" << endl;
}

//Procedure Penutupan dan ucapan trimakasih
void tutup ()
{
    int c;
    cout << "\n\n\n Terimakasih Telah Mencoba Program ini - hudzzz \n\n\n";
    cout << "Apakah anda ingin keluar dari program ini ? \n ketik 1 jika iya \n Ketik 0 jika tidak \n Atau Ketik 2 jika anda ingin kembali ke awal \n" ;
    cin >> c;
    
    if (c == 1)
    {
        exit(0);
    }
    else if (c == 0)
    {
        cout << "Anda Tidak jadi keluar";
        tutup();
    }
    else if (c == 2)
    {
        system( "CLS");
        main();
    }
    else
    {
        cout << "Anda salah input";
        tutup();
    }
}

//Procedure untuk bertanya apakah ingin mencari nilai atau sudah selesai dan keluar
void nanyaCari ()
{
    int c;
    
    cout << "Apakah anda ingin mencari angka yang terdapat di dalam array ?? \n ketik 1 jika iya \n ketik 0 jika tidak \n";
    cin >> c;
    
    if (c == 0)
    {
        cout << "\n\n\n Trimakasih Telah Mencoba Program ini -hudzzz \n\n\n";
        cin.get();
         exit(0);
    }
    
    else if (c != 0 && c!= 1)
    {
        cout << "Input yang anda masukan salah, Akan saya tanyakan kembali" << endl;
        nanyaCari();
    }
}

