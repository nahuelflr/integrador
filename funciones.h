#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int x = 0;
  int opc,tam=10, j=0;
    string tortas[10];
    int precios[10];
    int ventas[][5];
void cargarTortas (string tortas[],int precio[],int tam){


    cout<<"Por favor ingrese datos de las tortas: "<<endl;
    for(int i = 0; i < tam; i++){
        cout << "\n******* Torta " << i + 1 << "********: "<<endl;
        cout << "Nombre de la torta: ";
        cin>>tortas[i];
        cout << "Precio de la torta: ";
        cin>>precio[i];
    }

}
void registrarVentas (int ventas[][5]){
    cout<< "Ingrese el codigo del cliente: ";
    cin>>ventas[x][0];

    cout<< "Ingrese el codigo de la torta: ";
    cin>>ventas[x][1];

    cout<<"Ingrese el precio de la torta: ";
    cin>>ventas[x][2];

    cout<<"Ingrese cantidad de tortas: ";
    cin>>ventas[x][3];

    cout<<"Ingrese forma de pago: ";
    cin>>ventas[x][4];
    x++;
}
void recaudacion (int ventas[][5],string tortas[2]){
    int cod,z,i,k,ii;
    int recaudacionTotal[10];

    for(cod=1; cod<11; cod++){
        recaudacionTotal[cod-1]=0;
        for(z=0; z<x; z++){
            if(ventas[z][1] = cod){
                recaudacionTotal[cod-1]=recaudacionTotal[cod-1]+ventas[z][2]*ventas[z][3];
                cout<<"x "<<x<<endl;
                cout<<"z "<<z<<endl;
                cout<<"cod "<<cod<<endl;
            };
        };
    };

    cout<<"Recaudacion total por tortas"<<endl;
    for(i=0; i < 10; i++){
        cout<<" "<<tortas[i]<<"    $"<<recaudacionTotal[i]<<endl;
    };
}
void clienteMasGasto(int ventas[][5]){
    int cli,z,k,maxGasto=0,clienteMax=0;
    int recaudacionCliente[2];
    for(cli=0; cli<15; cli++){
            recaudacionCliente[cli]=0;
        for(z=0; z<x; z++){
            if(ventas[z][0] = cli+101){
                recaudacionCliente[cli]=recaudacionCliente[cli]+ventas[z][2]*ventas[z][3];
                };
            };
        };

    maxGasto=recaudacionCliente[0];
    clienteMax=101;
    for(k=1; k<16; k++){
            if(maxGasto<recaudacionCliente[k]){
                maxGasto=recaudacionCliente[k];
                clienteMax=k+100;
                }
            }
        cout<<"Cliente que mas gasto"<<endl;

        cout<<"Codigo: "<<clienteMax<<"    $"<<maxGasto<<endl;
}
#endif // FUNCIONES_H_INCLUDED
