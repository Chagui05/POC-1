#ifndef _PIEZA_
#define _PIEZA_ 1

class Pieza{
    public:

    int height;
    int width;
    bool stackable;

    Pieza(int h, int w, bool s){
        height =h ;
        width=w;
        stackable =s;
        }
};
    

#endif;