#ifndef _PAREDPUERTAP_
#define _PAREDPUERTAP_ 1

class ParedConPuertaP: public PuertaP{
public :
    ParedConPuertaP(int pPiezasLeft) : Pared(pPiezasLeft) {
        PuertaP puertaP = new PuertaP(1,1, true)

        piezasNeeded.push_back(puertaP);
    };
};

#endif