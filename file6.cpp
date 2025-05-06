#include <iostream>
#include <string>
using namespace std;

class siswa; 

class orang 
{
    private:
        string nama;

    public:
        void setNama(string pnama);
        friend class siswa;  


class siswa
{
    private:
        int id;

    public:
        void setId(int pid);                 
        void displayA11(orang &a);           
};

void siswa::displayA11(orang &a)
{
    cout << id << endl; 
    cout << a.nama << endl; 
}


void orang::setNama(string pnama) 
{
    nama = pnama; 
}


void siswa::setId(int pid)
{
    id = pid; 
}

int main()
{
    orang joko;                  
    joko.setNama("Joko Susilo"); 
    siswa joko_siswa;            
    joko_siswa.setId(1);        
    joko_siswa.displayA11(joko); 

    return 0; 
}