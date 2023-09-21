#include "List.h"
#include "Piezas\Pieza.h"
#include "modulos\Modulo.h"
#include <iostream>

using namespace std;

List <Modulo> pila = new List;

void armar(m1,m2,m3,m4){
    pila.push(m1)
    pila.push(m2)
    pila.push(m3)
    pila.push(m4)
}

int main() {
    int opcion;

    do {
        // Menú principal
        cout << "MENU:" << endl;
        cout << "1. Ver Pila" << endl;
        cout << "2. Armar" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Mostrando la Pila..." << endl;
                int i = 0
                while (i< pila.getSize){
                    cout << pila.find(i) << endl;
                }
                break;
            case 2:
                // Menú "Armar"
                int mCount=0
                Modulo m1;
                Modulo m2;
                Modulo m3;
                Modulo m4;
                do {
                    cout << "MENU Armar:" << endl;
                    cout << "1. Pared" << endl;
                    cout << "2. ParedConPuerta" << endl;
                    cout << "3. ParedConPuertaP" << endl;
                    cout << "4. ParedConVentana" << endl;
                    cout << "5. Piso" << endl;
                    cout << "6. Techo" << endl;
                    cout << "7. Terraza" << endl;
                    cout << "8. Armar" << endl;   
                    cout << "8. Reiniciar Valores" << endl;                    
                    cout << "10. Regresar al menú principal" << endl;
                    cout << "Seleccione una opción (1-9): ";
                    cin >> opcionArmar;

                    switch (opcionArmar) {
                        case 1:
                            if (mCount==0){
                                m1= Pared();
                            }
                            else if (mCount==1){
                                m2=Pared();
                            }
                            else if (mCount==2){
                                m3=Pared();
                            }
                            else if (mCount==3){
                                m4=Pared();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 2:
                            if (mCount==0){
                                m1= ParedConPuerta();
                            }
                            else if (mCount==1){
                                m2=ParedConPuerta();
                            }
                            else if (mCount==2){
                                m3=ParedConPuerta();
                            }
                            else if (mCount==3){
                                m4=ParedConPuerta();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 3:
                            if (mCount==0){
                                m1= ParedConPuertaP();
                            }
                            else if (mCount==1){
                                m2=ParedConPuertaP();
                            }
                            else if (mCount==2){
                                m3=ParedConPuertaP();
                            }
                            else if (mCount==3){
                                m4=ParedConPuertaP();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 4:
                            if (mCount==0){
                                m1= ParedConVentana();
                            }
                            else if (mCount==1){
                                m2=ParedConVentana();
                            }
                            else if (mCount==2){
                                m3=ParedConVentana();
                            }
                            else if (mCount==3){
                                m4=ParedConVentana();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 5:
                            if (mCount==0){
                                m1= Piso();
                            }
                            else if (mCount==1){
                                m2=Piso();
                            }
                            else if (mCount==2){
                                m3=Piso();
                            }
                            else if (mCount==3){
                                m4=Piso();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 6:
                            if (mCount==0){
                                m1= Techo();
                            }
                            else if (mCount==1){
                                m2=Techo();
                            }
                            else if (mCount==2){
                                m3=Techo();
                            }
                            else if (mCount==3){
                                m4=Techo();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 7:
                            if (mCount==0){
                                m1= Terraza();
                            }
                            else if (mCount==1){
                                m2=Terraza();
                            }
                            else if (mCount==2){
                                m3=Terraza();
                            }
                            else if (mCount==3){
                                m4=Terraza();
                            }
                            else{
                                cout << "Ya se han llenado todos los valores" << endl;
                            }
                            mCount++;
                            break;
                        case 8: 
                            if mCount!=4{
                                cout<<"No se puede armar, por favor llene todos los módulos"<<endl;
                            }
                            else{
                                if mCount != 4{
                                    cout<<"No se puede armar, por favor llene todos los módulos"<<endl;
                                }
                                else{
                                    armar(m1,m2,m3,m4)
                                }
                            }
                            break;
                        case 9:
                            mCount=0
                        case 10:
                            // Regresar al menú principal
                            break;
                        default:
                            cout << "Opción no válida. Por favor, seleccione una opción válida (1-10)." << endl;
                            break;
                    }
                } while (opcionArmar != 10); // Salir del menú "Armar" al seleccionar la opción 8
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida (1-3)." << endl;
                break;
        }

    } while (opcion != 3); // Salir del programa al seleccionar la opción 3

    return 0;
}
