/*
 program : Menghitung gaji Karyawan
 by : hudzzz01
 email : hdzzzzzz01@gmail.com
 date : 10 Januari 2020.
 
 
 menghitukng gaji karyawan /minggu jam kerja
 standar a/ 50 jm jika lebih dari 50 jam dianggap lembur
 
 jam kerja perhari maksimal = 10 jam
 upah karyawan perjam jam standar = 10% dari jumlah gaji.
 upah gaji perhari = 50k
 upah lembur /jam = 25% * upah /hari
 upah lembur = jamlembur *upah lembur/jam
 
 total gaji perminggu = jumlah jam standar * upah standar / jam + upah lembur
 
 nama , jamkerja, waktu lembur, upah
 
 
 */

#include<iostream>
using namespace std;

class Karyawan
{
    private :
    string nama;
    int jamKerja;
    int waktuKerja;
    int waktuLembur;
    float upah;
    
    public :
    void setNama(string nama)
    {
        this->nama = nama;
    }
    void setJamKerja(int jamKerja)
    {
        this->jamKerja = jamKerja;
    }
    void setWaktuLembur(int waktuLembur)
    {
        this->waktuLembur = waktuLembur;
    }
    void setUpah(float upah)
    {
        this->upah = upah;
    }
    void setWaktuKerja(int waktuKerja)
    {
        this->waktuKerja = waktuKerja;
    }
    
    void tampilan()
    {
        cout << "namanya " << getNama() <<endl;
        cout << "kerjanya selama : " << getWaktuKerja() << " jam"<<endl;
        cout << "Waktu Lembur : " << getWaktuLembur() << " jam"<<endl;
        cout << "upah si " << getNama() << " perminggu adalah : Rp." << getUpah()  <<endl;
    }
    
    
    
    string getNama()
    {
        return nama;
    }
    int getJamKerja()
    {
        return jamKerja;
    }
    int getWaktuLembur()
    {
        return waktuLembur;
    }
    float getUpah()
    {
        return upah;
    }
    int getWaktuKerja()
    {
        return waktuKerja;
    }
    
    //konstruktor
    
    Karyawan(){};
    Karyawan(string nama, int jamKerja)
    {
        Karyawan::setNama(nama);
        Karyawan::setJamKerja(jamKerja);
    }
    
    
    
    
    
};


float hitungUpah(float a, float b);
void masukanKaryawan(int n);
void loading();
void tampilkanKaryawan(Karyawan nama[],int n);

int main()
{
    system("clear");//jika ente menggunakan windows ubah kata "clear" menjadi  "CLS"
    
    int n;
    cout << "Masukan Jumlah Karyawan yang ingin anda input : ";
    cin >> n;
    cout << "\n";
    
    masukanKaryawan(n);
    
    
    
    
    return 0;
}

void masukanKaryawan(int n)
{
    Karyawan nama[n];
    
    for(int i = 0; i<n; i++)
    {
        //input nama
        
        
        string x1,dump;
        int x2,x3,x4,u1,u2,u3,dump2,list = i+1;;
        float upah;
        
        
        
        
        
        cout << "Masukan Nama Karyawan ke " << list << " : ";
        cin >>  x1;
        nama[i].setNama(x1);
        dump = nama[i].getNama();
        if( x1 == dump)
        {
            cout << "      -=Data disimpan=- \n";
        }
        
        //input jam kerja
        
        do
        {
            
            
            cout << "Masukan Jumlah jam kerja minggu lalu maksimal 99 jam (contoh input "<< 99 << ") dalam seminggu \nlewat dari itu tidak di anggap lembur dan di sebut kerja paksa : ";
            cin >> x2;
            
            
            
            if(x2 > 100)
            {
                cout << "Jam Kerja Maksimal 99 Jam perminggu " << endl;
                cout << "Bikin Candi lu ?" << endl;
                cout << "gblk" << endl;
            }
            else if (x2 == 100)
            {
                cout << "Jam Kerja Maksimal 99 Jam " << endl;
                cout << "Mabok Lu tong, Kerja Rodi ??" << endl;
                cout << "gblk" << endl;
            }
            else if (x2 == 0)
            {
                cout << "Gk usah kerja lu njenggg" << endl;
                cout << "gblk" << endl;
            }
            else if (x2 <= 0)
            {
                cout << "mau kerja apa ngutang ?" << endl;
                cout << "gblk" << endl;
            }
            
            
        }while (x2 >= 100 || x2 <=0 );
        
        nama[i].setJamKerja(x2); //60
        
        
        dump2 = nama[i].getJamKerja();
        if( x2 == dump2)
        {
            cout << "      -=Data disimpan=- \n";
        }
        
        
        if(x2 >= 50)
        {
            x3 = x2 - 50;
            x4 = 50;
        }
        else if (x2 <= 50)
        {
            x4 = x2;
            x3 = 0;
        }
        
        nama[i].setWaktuKerja(x4);
        nama[i].setWaktuLembur(x3);
        
        
        
        u1 = nama[i].getWaktuKerja(); //50
        cout << "     -=Data Waktu Kerja "<< x1 <<" Didapatkan=- \n";
        u2 = nama[i].getWaktuLembur(); //10
        cout << "     -=Data Waktu Lembur "<< x1 <<" Didapatkan=- \n\n\n";
        
        
        u3 = hitungUpah( u1,u2);
        
        nama[i].setUpah(u3);
        
        
        
        
        
        
        
        
    }
    
    tampilkanKaryawan(nama,n);
    
}

void tampilkanKaryawan(Karyawan nama[],int n)
{
    loading();
    system("clear");//jika ente menggunakan windows ubah kata "clear" menjadi  "CLS"
    
    for(int i=0;i<n;i++)
    {
        int list = i+1;
        
        cout << "\nData Karyawan ke " << list << " : \n";
        nama[i].tampilan();
    }
    
    
}

void loading()
{
    string loading[15] = {"Menghitung upah mas1ng-mAsing kAryawan -","mEnghitung upah Masing-maSing karyawan |","meNghitung upah masing-masinG kaRyawan -","menGhitung upah masing-masing karyAwAn /","mengHitung upah mas!ng-masIng KaryaWan -","menghItung upah mas!ng-mas|ng k@ryaWAn |","menghiTung upah mA5ing-masin9 k@ryaw4n -","menghitUng upah MasiNg_mas!ng karYawaN |","menghituNg upah mas1ng-Masing kAry@w4n /","menghitunG upah mAsing-masing karyawan -","menghitung Upah masing-masing karyawan |","menghitung uPah masing-masing karyawan -","menghitung upAh masing-masing karyawan -","menghitung upaH masing-masing karyawan |",};
    
    for (int i=0; i<50; i++)
    {
        
        for( int j=0; j<15;j++)
        {
            cout << loading[j] << endl;
            system("clear"); //jika ente menggunakan windows ubah kata "clear" menjadi  "CLS"
        }
        
    }
    
    
    
    
}

// a = waktu kerja b = waktu lembur
float hitungUpah(float a, float b)
{
    // Andaikan waktu jam kerja standar perhari = 10 jam. dan hari kerja perminggu = 5hari
    // artinya..... jam kerja yang di dapat maksimal perminggu dengan upah standar 10jam*5hari
    // adalah 50 jam.
    
    //gaji perhari adalah 50k
    //50k dibagi 10jam = 5k.
    //maka gaji perjamnya adalah 5000.
    
    //gaji lembur perjam = 25% dari 50k = 12500 perjam
    
    int wkt = a*5000 + b*12500;
    
    return wkt;
    
}



