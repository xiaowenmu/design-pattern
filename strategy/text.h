#ifndef TEXT_H
#define TEXT_H

#include"strategy.h"

namespace strategy{
	
class Text{
	
public:
	void fun(int a,int b){
		target->exec(a,b);
	}
	
	Text& operator=(Strategy* input){
		target = input;
		return *this;
	}	
	
private:
	Strategy *target;
};
	
	
	
}

#endif
