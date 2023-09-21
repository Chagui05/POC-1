#ifndef _PISO_
#define _PISO_ 1

class Piso: public Modulo{
public :
    Piso(int pPiezasLeft) : Modulo(pPiezasLeft) {
        Ladrillo ladrillo = new Ladrillo(2,4, true)
        Ceramica ceramica = new Ceramica(2,2, false)
        piezasNeeded.push_back(ladrillo);
        piezasNeeded.push_back(ceramica);
    };
};

#endif