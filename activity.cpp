#include <iostream>
#include <string>
using namespace std;
 
struct DetailAlamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};
int main(){
    mahasiswa mhs[3];
    for (int i = 0; i < 3; i++)
    {
      mahasiswa mhs;
    cout << "nomor mahasiswa :";
    getline(cin,mhs.nim);
    cout << "nama mahasiswa :";
    getline(cin,mhs.nama);
    cout << "alamat mahasiswa :";
    cout << "\t nama desa = ";
    cin >> mhs.alamat.desa;
    cout << "\t nama kota = ";
    cin >> mhs.alamat.kota;
    cout << "umur mahasiswa :";
    cin  >> mhs.umur;
    cout << endl;
    }
    for (int i = 0; i < 3; i++){
    cout << "\n nim : "<< mhs[i].nim;
    cout << "\n nama : "<< mhs[i].nama;
    cout << "\n alamat : "<< mhs[i].alamat.desa;
    cout << "\n alamat : "<< mhs[i].alamat.kota;
    cout << "\n umur : "<< mhs[i].umur;
    }
}

 
