#ifndef _TERRAZA_
#define _TERRAZA_ 1

class Terraza: public Modulo{
public :
    Terraza(){
        Ladrillo ladrillo = new Ladrillo(2,4, true)
        Ceramica ceramica = new Ceramica(2,2, false)
        Puerta puerta = new Puerta(1,1, true)

        piezasNeeded.push_back(ladrillo);
        piezasNeeded.push_back(ceramica);
        piezasNeeded.push_back(puerta);
    };
};

#endif