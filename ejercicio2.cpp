#include"car.h"
#include<iostream>

int main()
{
    Vehiculo Juan("ABCDE",2015,"Juan");
    cout<<"Información"<<endl;
    cout<<"Dueño: "<<Juan.getNombre()<<endl;
    cout<<"Año: "<<Juan.getYear()<<endl;;
    cout<<"Licencia: "<<Juan.getLicense()<<endl;
    cout<<Juan.getDesc()<<endl;

    Car Paulo("IJKL",2015,"Paulo","XYZ");
    cout<<"Información"<<endl;
    cout<<"Estilo: "<<Paulo.getStyle()<<endl;
    cout<<Paulo.getDesc();

}
