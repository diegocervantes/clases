#include "car.h"


class Motocicleta : public Vehicle {

public:
	Motocicleta( const string & myBrand , const int myYear , const int myWheel )
	: Vehicle ( myBrand , myYear , myWheel ) {}

	const string getDesc();


};