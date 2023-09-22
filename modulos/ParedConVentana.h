#ifndef _PAREDVENTANA_
#define _PAREDVENTANA_ 1

class ParedConVentana: public Puerta{
public :
    ParedConVentana() {
        Ventana ventana = new Ventana()
        Ladrillo ladrillo = Ladrillo()

        piezasNeeded.push_back(ladrillo);
        piezasNeeded.push_back(ventana);
    };
};

#endif