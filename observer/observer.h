#ifndef OBSERVER_H
#define OBSERVER_H



#include<memory>

namespace observerPattern{


class Observer{
public:
	virtual void update() = 0;
	
};

}


#endif
