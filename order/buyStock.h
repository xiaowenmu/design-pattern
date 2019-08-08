#ifndef BUYSTOCK_H
#define BUYSTOCK_H

#include"order.h"
#include"stock.h"

class BuyStock:public Order{
public:
	BuyStock(Stock *s):stock(s){}
	
	void exec(){
		stock->buy();
	}
	
private:
	Stock *stock;
	
};


#endif