
#include <iostream>
#include "moto.h"

 

int main(){
	Car ca("Chevrolet" , 2015 , 4 , "Deportivo" );
	Motocicleta mo("Honda" , 2012 , 2 );
	Vehicle &m = mo;
	Vehicle &c = ca; 

	cout<<m.getDesc()<<endl;
	cout<<m.getYear()<<endl;
	cout<<m.getBrand()<<endl;
	cout<<m.getWheels()<<endl;


	cout<<c.getDesc()<<endl;
	cout<<c.getYear()<<endl;
	cout<<ca.getStyle()<<endl;
	cout<<c.getBrand()<<endl;
	cout<<c.getWheels()<<endl;

	return 0;

}


