#include "Bengkel.h"
#include <iostream>
#include <iomanip>

Bengkel::Bengkel(std::string namaBengkel) : namaBengkel(namaBengkel) {}

std::string Bengkel::getNamaBengkel() const {
    return namaBengkel;
}

void Bengkel::setNamaBengkel(std::string namaBengkel) {
    this->namaBengkel = namaBengkel;
}

void Bengkel::cetakNota(const Servis0037 &servis) const {
    std::cout << "=== NOTA BENGKEL: " << namaBengkel << " ===\n";
    std::cout << "Jenis Servis : " << servis.getJenisServis() << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Biaya Servis : Rp " << servis.getBiayaServis() << "\n";
    std::cout << "Biaya Part   : Rp " << servis.getBiayaPart() << "\n";
    std::cout << "Total Tagihan: Rp " << servis.hitungTotalBiaya() << "\n";
    std::cout << "-------------------------------------------\n";
}