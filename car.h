#include"vehiculo.h"

class Car : public Vehiculo {
    string style ;
public :
    Car( const string & myLicencia , const int miA�o , const string nombre,const string &myStyle )
        : Vehiculo ( myLicencia , miA�o, nombre), style ( myStyle ) {}
    const string & getStyle () { return style ;}
};
