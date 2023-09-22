#ifndef _PAREDPUERTA_
#define _PAREDPUERTA_ 1

class ParedConPuerta: public Puerta{
public :
    ParedConPuerta()  {
        Puerta puerta = Puerta()
        Ladrillo ladrillo = Ladrillo()

        piezasNeeded.push_back(ladrillo);
        piezasNeeded.push_back(puerta);
    };
};

#endif