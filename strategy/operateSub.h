#ifndef OPERATESUB_H
#define OPERATESUB_H


#include"strategy.h"


#include<iostream>

namespace strategy{

class OperateSub:public Strategy{

public:
	void exec(int num1,int num2) override{
		std::cout<<num1-num2<<std::endl;
		
	}
	
	
};
	
	
}

#endif
