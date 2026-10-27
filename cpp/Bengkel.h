#ifndef BENGKEL_H
#define BENGKEL_H

#include <string>
#include "Servis0037.h"

class Bengkel {
private:
    std::string namaBengkel;

public:
    Bengkel(std::string namaBengkel);
    std::string getNamaBengkel() const;
    void setNamaBengkel(std::string namaBengkel);
    void cetakNota(const Servis0037 &servis) const;
};

#endif