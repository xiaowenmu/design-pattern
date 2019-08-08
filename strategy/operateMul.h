#ifndef OPERATEMUL_H
#define OPERATEMUL_H


#include"strategy.h"


#include<iostream>

namespace strategy{
	
class OperateMul:public Strategy{
	
public:
	void exec(int num1,int num2) override{
		std::cout<<num1*num2<<std::endl;
	}
	
	
};
	
	
}


#endif
