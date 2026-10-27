// NIM: 1003260037
// Domain: Bengkel
// Nama Class Model: Servis0037
// Class Pengelola: Bengkel
// Nilai Dasar: 32
// Atribut Numerik: 32 * 1000 = 32.000


#include <iostream>
#include "Servis0037.h"
#include "Bengkel.h"

int main() {
    Bengkel bengkel("Bengkel Motor Maju Lancar");

    Servis0037 s1("Servis Ringan + Tune Up", 32000, 45000);

    Servis0037 s2("Ganti Kampas Rem Depan", 32000, 75000);

    bengkel.cetakNota(s1);
    bengkel.cetakNota(s2);

    std::cout << "Uji Validasi Setter:\n";
    s1.setBiayaPart(-10000);
    std::cout << "Biaya servis s1 setelah validasi: Rp " << s1.getBiayaServis() << "\n";

    return 0;
}