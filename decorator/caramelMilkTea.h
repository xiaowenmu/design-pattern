#ifndef CARAMELMILKTEA_H
#define CARAMELMILKTEA_H

#include"milkTea.h"

#include<string>

namespace decorator{


class CaramelMilkTea:public MilkTea{
	
public:
	CaramelMilkTea(int money,std::string name):price(money),material(name){}
	int getPrice() override{
		return price;
	}
	std::string getMaterial() override{
		return material;
	}
	void addPrice(int money) override{
		price += money;
	}
	void addMaterial(std::string name) override{
		material += "+" + name;
	}	
private:
	int price;
	std::string material;
	
};




}





#endif