#include "vehicle.h"


class Car : public Vehicle {
	string style ;
public:
	Car( const string & myBrand , const int myYear , const int myWheel , const string myStyle )
	: Vehicle ( myBrand , myYear, myWheel ), style ( myStyle ) {}

	const string getDesc(); 
	const string & getStyle();
 			
};