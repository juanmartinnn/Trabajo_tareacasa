#include"car.h"
#include<iostream>

int main()
{
    Vehiculo Juan("ABCDE",2015,"Juan");
    cout<<"Informaci�n"<<endl;
    cout<<"Due�o: "<<Juan.getNombre()<<endl;
    cout<<"A�o: "<<Juan.getYear()<<endl;;
    cout<<"Licencia: "<<Juan.getLicense()<<endl;
    cout<<Juan.getDesc()<<endl;

    Car Paulo("IJKL",2015,"Paulo","XYZ");
    cout<<"Informaci�n"<<endl;
    cout<<"Estilo: "<<Paulo.getStyle()<<endl;
    cout<<Paulo.getDesc();

}
