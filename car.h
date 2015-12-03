#include"vehiculo.h"

class Car : public Vehiculo {
    string style ;
public :
    Car( const string & myLicencia , const int miAño , const string nombre,const string &myStyle )
        : Vehiculo ( myLicencia , miAño, nombre), style ( myStyle ) {}
    const string & getStyle () { return style ;}
};
