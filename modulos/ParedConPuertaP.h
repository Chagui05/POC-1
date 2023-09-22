#ifndef _PAREDPUERTAP_
#define _PAREDPUERTAP_ 1

class ParedConPuertaP: public PuertaP{
public :
    ParedConPuertaP(int pPiezasLeft) : Pared(pPiezasLeft) {
        PuertaP puertaP = new PuertaP()
        Ladrillo ladrillo = Ladrillo()

        piezasNeeded.push_back(ladrillo);
        piezasNeeded.push_back(puertaP);
    };
};

#endif