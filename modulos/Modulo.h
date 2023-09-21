#ifndef _MODULO_
#define _MODULO_ 1
#include "../Piezas/Pieza.h"
#include "../Piezas/Ceramica.h"
#include "../Piezas/CieloRazo.h"
#include "../Piezas/Ladrillo.h"
#include "../Piezas/Puerta.h"
#include "../Piezas/Ventana.h"

class Modulo{
    private:
        int piezasUsed;
        int piezasLeft;
        std::vector<Pieza> piezasNeeded;

    Public:

    Modulo(int pPiezasLeft){
        piezasUsed = 0;
        piezasLeft =pPiezasLeft;
        }
};
    


#endif;