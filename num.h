#include "moto.h"

string num(int i) 
{ 
	string num; 
	int temp; 
	while(i / 10!=0){ 
		temp=i%10; 
		i= i/10; 
		temp =temp + 48; 
		num = (char)temp + num; 

	} 
	i=i+48; 
	num = (char)i + num ; 
	return num; 
}
