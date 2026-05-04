#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
        Mahasiswa(); // Constructor
};

Mahasiswa::Mahasiswa()
{
    cout << "constructor Terpanggil" << endl; //definisi constructor
};

int main ()
{
    Mahasiswa mhs;
    return 0;
}
