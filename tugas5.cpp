#include<iostream>
#include<string>
using namespace std;

//fungsi untuk menghitung gaji pokok
int pokok(int jam_kerja){
    int gaji_per_jam=7500;
    return(jam_kerja <=8)?
    jam_kerja*gaji_per_jam:8*
    gaji_per_jam;
}
//funsi untuk menghitung uang lembur
int lembur (int jam_kerja){
    int gaji_per_jam=7500;
    if(jam_kerja>8){
            int jam_lembur=jam_kerja -8;
            return jam_lembur*
gaji_per_jam*1.5;
    }
    return 0;
}
//fungsi untuk menghitung uang makan
int makan(int jam_kerja){
    if (jam_kerja>=9){
            return 10000;
    }
    return 0;
}
//fungsi untuk menghitung uang transportasi lembur
int transport(int jam_kerja){
    if(jam_kerja >=10){
            return 13000;
    }
    return 0;
}
int main(){
    string NIP,Nama;
    int jam_kerja;

    //input data karyawan
    cout<<"Masukkan NIP:";
    cin>>NIP;
    cout<<"Masukkan Nama:";
    cin.ignore();
    getline(cin,Nama);
    cout<<"Masukkan jumlah jam kerja:";
    cin>>jam_kerja;

    //hitung gaji pokok,lembur,uang makan dan tranportasi
    int gaji_pokok=
    pokok(jam_kerja);
    int uang_lembur=
    pokok(jam_kerja);
    int uang_makan=
    pokok(jam_kerja);
    int uang_transport=
    pokok(jam_kerja);

    //output hasil perhitungan
    cout<<"nNIP:"<<NIP<<endl;
    cout<<"Nama:"<<Nama<<endl;
    cout<<"Gaji pokok:"<<gaji_pokok<<endl;
    cout<<"Lembur:"<<uang_lembur<<endl;
    cout<<"Transport:"<<uang_transport<<endl;
return 0;
}
