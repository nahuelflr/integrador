#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

#include "funciones.h"

int main(){

    while(true){
            system("cls");
        cout<<"1. Cargar tortas y precios"<<endl;
        cout<<"2. Cargar ventas"<<endl;
        cout<<"3. Imprimir recaudacion total por torta"<<endl;
        cout<<"4. Imprimir cliente que mas gasto"<<endl;
        cout<<"0. Fin del programa"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc) {
        case 1: cargarTortas (tortas,precios,tam);
                break;
        case 2: registrarVentas (ventas);
                j++;
                break;
        case 3: recaudacion (ventas,tortas);
                break;
        case 4: clienteMasGasto(ventas);
                break;

        case 0: return 0;
                break;

        default:cout<<"OPCION INCORRECTA"<<endl;
        }
        system("pause");

    }
    return 0;
}
