#include"stock.h"
#include"buyStock.h"
#include"sellStock.h"


int main(){
	Stock stock;
	BuyStock buy(&stock);
	SellStock sell(&stock);
	
	buy.exec();
	sell.exec();
	
	return 0;
	
}
