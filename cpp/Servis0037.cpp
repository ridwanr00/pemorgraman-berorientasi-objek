#include "Servis0037.h"

Servis0037::Servis0037(std::string jenisServis, double biayaServis, double biayaPart)
    : jenisServis(jenisServis) {
    setBiayaServis(biayaServis);
    setBiayaPart(biayaPart);
}

std::string Servis0037::getJenisServis() const {
    return jenisServis;
}

void Servis0037::setJenisServis(std::string jenisServis) {
    this->jenisServis = jenisServis;
}

double Servis0037::getBiayaServis() const {
    return biayaServis;
}

void Servis0037::setBiayaServis(double biayaServis) {
    if (biayaServis < 0) {
        std::cout << "[Peringatan] Biaya servis tidak boleh negatif! Diset ke 0.\n";
        this->biayaServis = 0;
    } else {
        this->biayaServis = biayaServis;
    }
}

double Servis0037::getBiayaPart() const {
    return biayaPart;
}

void Servis0037::setBiayaPart(double biayaPart) {
    if (biayaPart < 0) {
        std::cout << "[Peringatan] Biaya part tidak boleh negatif! Diset ke 0.\n";
        this->biayaPart = 0;
    } else {
        this->biayaPart = biayaPart;
    }
}

double Servis0037::hitungTotalBiaya() const {
    return this->biayaServis + this->biayaPart;
}