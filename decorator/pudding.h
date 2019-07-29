#ifndef PUDDING_H
#define PUDDING_H


#include"milkTea.h"
#include<string>

namespace decorator{


class Pudding{
	
public:
	Pudding(MilkTea *input):tea(input){
		tea->addPrice(2);
		tea->addMaterial("pudding");
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
