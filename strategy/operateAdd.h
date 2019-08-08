#ifndef OPERATEADD_H
#define OPERATEADD_H

#include"strategy.h"

#include<iostream>

namespace strategy{

class OperateAdd:public Strategy{
	
public:
	void exec(int num1,int num2) override{
		std::cout<<num1+num2<<std::endl;
	}

	
};

}
#endif
