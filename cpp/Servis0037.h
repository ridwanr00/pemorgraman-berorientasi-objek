#ifndef SERVIS0037_H
#define SERVIS0037_H

#include <string>
#include <iostream>

class Servis0037 {
private:
    std::string jenisServis;
    double biayaServis;
    double biayaPart;

public:
    Servis0037(std::string jenisServis, double biayaServis, double biayaPart);

    std::string getJenisServis() const;
    void setJenisServis(std::string jenisServis);

    double getBiayaServis() const;
    void setBiayaServis(double biayaServis);

    double getBiayaPart() const;
    void setBiayaPart(double biayaPart);

    double hitungTotalBiaya() const;
};

#endif