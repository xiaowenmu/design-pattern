#ifndef MILKTEA_H
#define MILKTEA_H

#include<string>


namespace decorator{

class MilkTea{
	
public:
	virtual int getPrice() = 0;
	virtual std::string getMaterial() = 0;
	virtual void addPrice(int money) = 0;
	virtual void addMaterial(std::string name) = 0;
	
	
};



}

#endif