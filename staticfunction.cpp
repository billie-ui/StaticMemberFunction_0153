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
