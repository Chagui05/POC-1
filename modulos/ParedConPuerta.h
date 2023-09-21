#ifndef _PAREDPUERTA_
#define _PAREDPUERTA_ 1

class ParedConPuerta: public Puerta{
public :
    ParedConPuerta(int pPiezasLeft) : Pared(pPiezasLeft) {
        Puerta puerta = new Puerta(1,1, true)

        piezasNeeded.push_back(puerta);
    };
};

#endif