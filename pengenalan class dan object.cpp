#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    string nama;
    int nim;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Budi";
    mahasiswa.nama = "Budi";

    cout << "Nama \t: " << mahasiswa.nama << endl;
    cout << "NIM \t: " << std::to_string(mahasiswa.nim) << endl;
}