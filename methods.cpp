#include <iostream>
using namespace std;

class PersegiPanjang
{
public:
    float hitungLuas(int p, int l)
    {
        return p * l;
    }
};

class Mahasiswa
{
public:
    string nama;
    string nim;
    string umur;

    void display_data(string nama, string nim, string umur)
    {
        cout << "Nama \t: " << nama << endl;
        cout << "Nim \t: " << nim << endl;
        cout << "Umur \t: " << umur << endl;
    }
};

class RekeningBank
{
private:
    int saldo = 0;

public:
    string pemilik;

    float setorTunai(int jumlah)
    {
        if (jumlah > 0)
        {
            return saldo += jumlah;
        }
        return 0;
    }

    float tarikTunai(int jumlah)
    {
        if (saldo > jumlah)
        {
            return saldo -= jumlah;
        }
        return 0;
    }

    void lihatSaldo()
    {
        cout << saldo << endl;
    }
};

class Hewan
{
public:
    string nama;
    int umur;

    void makan()
    {
        cout << nama << " sedang makan";
    }

    void tidur()
    {
        cout << nama << " sedang tidur";
    }
};

class Kucing : public Hewan
{
public:
    Kucing()
    {
        Hewan::nama = "Kucing";
    }

    void bersuara()
    {
        cout << nama << " sedang makan" << endl;
        cout << nama << " mengeong" << endl;
    }
};

class Anjing : public Hewan
{
public:
    Anjing()
    {
        Anjing::nama = "Anjing";
    }

    void bersuara()
    {
        cout << nama << " sedang makan" << endl;
        cout << nama << " menggonggong" << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;
    Mahasiswa mahasiswa2;

    // mahasiswa.display_data("Eko", "22040004", "25");
    // mahasiswa2.display_data("Budi", "22040003", "24");

    PersegiPanjang persegi_panjang;

    // cout << persegi_panjang.hitungLuas(5, 2);

    RekeningBank rekening_bank;

    rekening_bank.setorTunai(50000);

    rekening_bank.tarikTunai(25000);

    rekening_bank.lihatSaldo();

    Kucing kucing;
    kucing.bersuara();

    Anjing anjing;
    anjing.bersuara();
}
