#ifndef _PARED_
#define _PARED_ 1

class Pared: public Modulo{
public :
    Pared(int pPiezasLeft) : Modulo(pPiezasLeft) {
        Ladrillo ladrillo = new Ladrillo(2,4, true)

        piezasNeeded.push_back(ladrillo);
    };
};

#endif