#ifndef _PARED_
#define _PARED_ 1

#include "Modulo.h"

class Pared: public Modulo{
public :
    Pared(int pPiezasLeft) : Modulo(pPiezasLeft) {
        Ladrillo ladrillo = Ladrillo()

        piezasNeeded.push_back(ladrillo);
    };
};

#endif