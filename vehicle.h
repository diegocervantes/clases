
#include <string>

using namespace std;

class Vehicle {
protected:
	string brand ;
	int year ;
	int wheel ;

public:
	Vehicle ( const string & myBrand , const int myYear , const int myWheel )
	: brand ( myBrand ), year ( myYear ) , wheel ( myWheel ) {}
	virtual const string getDesc() = 0 ;
	const int getWheels(); 
	const string & getBrand(); 
	const int getYear();
	};