#include"stock.h"
#include"buyStock.h"
#include"sellStock.h"


int main(){
	Stock stock;
	buyStock buy(&stock);
	sellStock sell(&stock);
	
	buy.exec();
	sell.exec();
	
	return 0;
	
}