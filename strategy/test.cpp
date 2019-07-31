#include"operateMul.h"
#include"operateAdd.h"
#include"operateSub.h"
#include"text.h"


int main(){
	strategy::Text text;
	strategy::OperateAdd add;
	strategy::OperateSub sub;
	strategy::OperateMul mul;
	
	text = &add;
	text.fun(10,5);
	text = &sub;
	text.fun(10,5);
	text = &mul;
	text.fun(10,5);
	
	return 0;
	
	
	
}
