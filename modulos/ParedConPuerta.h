#ifndef _PAREDPUERTA_
#define _PAREDPUERTA_ 1

class ParedConPuerta: public Puerta{
public :
    ParedConPuerta(int pPiezasLeft) : Pared(pPiezasLeft) {
        Puerta puerta = Puerta()

        piezasNeeded.push_back(puerta);
    };
};

#endif