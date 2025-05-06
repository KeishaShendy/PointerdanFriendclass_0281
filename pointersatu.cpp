#include <iostream>
using namespace std;

class mahasiswa { 
    public:            
        int nim;
    
        mahasiswa(int n) { 
            nim = n;
        }
    
        void shownim() {
            cout << "No induk = " << nim << endl;
        }
    };
    
    