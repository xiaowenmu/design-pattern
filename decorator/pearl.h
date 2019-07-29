#ifndef PEARL_H
#define PEARL_H


#include"milkTea.h"
#include<string>

namespace decorator{


class Pearl{
	
public:
	Pearl(MilkTea *input):tea(input){
		tea->addPrice(2);
		tea->addMaterial("pearl");
	}
	
	int getPrice(){
		return tea->getPrice();
	}
	std::string getMaterial(){
		return tea->getMaterial();
	}
	
	
	
private:
	MilkTea *tea;
	
};


}



#endif
