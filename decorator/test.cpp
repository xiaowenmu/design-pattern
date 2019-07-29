#include"caramelMilkTea.h"
#include"pearl.h"
#include"pudding.h"

#include<iostream>
#include<string>

int main(){
	
	decorator::CaramelMilkTea tea(10,"CaramelMilkTea");
	decorator::Pearl pearlInstance(&tea);
	std::cout<<pearlInstance.getPrice()<<std::endl;
	std::cout<<pearlInstance.getMaterial()<<std::endl;
	
	decorator::Pudding puddingInstance(&tea);
	std::cout<<puddingInstance.getPrice()<<std::endl;
	std::cout<<puddingInstance.getMaterial()<<std::endl;
	
	
	return 0;
	
	
}
