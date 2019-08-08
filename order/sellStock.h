#ifndef SELLSTOCK_H
#define SELLSTOCK_H

#include"order.h"
#include"stock.h"


class SellStock:public Order{
	
public:
	SellStock(Stock *s):stock(s){}
	
	void exec(){
		stock->sell();
	}
	
private:
	Stock *stock;
	
};

#endif