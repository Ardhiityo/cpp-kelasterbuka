#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string name;
    int nim;
    Mahasiswa(int nim, string name)
    {
        Mahasiswa::name = name;
        Mahasiswa::nim = nim;

        cout << "Nama \t: " << name << endl;
        cout << "Nim \t: " << nim << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa = Mahasiswa(22040004, "Andi");
}
