#ifndef _PAREDVENTANA_
#define _PAREDVENTANA_ 1

class ParedConVentana: public Puerta{
public :
    ParedConVentana(int pPiezasLeft) : Pared(pPiezasLeft) {
        Ventana ventana = new Ventana(1,4, true)

        piezasNeeded.push_back(ventana);
    };
};

#endif