#include "num.h"




///FUNCIONES CLASES/////

const int Vehicle::getWheels(){
	return wheel;
}

const int Vehicle::getYear(){
	return year;
}	
const string & Vehicle::getBrand(){
	return brand;
}	
const string & Car::getStyle(){
	return style;
}
const string Car::getDesc(){
	return "Carro del anio " + num(year) + " de estilo " + style + " marca " + brand + " con " + num(wheel) + " llantas" ;
}
const string Motocicleta::getDesc(){
	return "Moto del anio " + num(year) + " marca " + brand + " con " + num(wheel) + " llantas" ;
}