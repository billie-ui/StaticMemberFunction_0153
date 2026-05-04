#include <iostream>
#include <string> //menyertakan library string
using namespace std;

class Mahasiswa
{
    private:
        static int nim;
    
    public:
        int id;
        string nama;

        void setID();
        void printALL();

        //Pembuatan Static Function
        static void setNim (int pnim)
        {
            nim = pnim;
        };

        static int getNim ()
        {
            return nim;
        }

        Mahasiswa (string pnama) : nama(pnama)
        {
            setID();
        }
};

int Mahasiswa::nim = 0;
//pendefinisial prosedur2 diluar class

void Mahasiswa::setID()
{
    id = ++nim;
}

void Mahasiswa::printALL()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main ()
{
    //pembuatan object dan pemberian nilai
    Mahasiswa mhs1("sri ti");
    Mahasiswa mhs2("budiono");
    //memberi nilai pada setNIM() untuk merubah nilai nim
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("andil");
    Mahasiswa mhs4("jek");
}

