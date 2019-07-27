#ifndef CONCRETOBSERVER_H
#define CONCRETOBSERVER_H



#include"observer.h"
#include"subject.h"

#include<memory>
#include<iostream>


namespace observerPattern{

	
class ConcretObserver:public Observer{
public:
	explicit ConcretObserver(Subject* sub):subject_(sub){}
	void update() override{
		std::cout<<subject_->getState()<<std::endl;
	}
	
private:
	Subject* subject_;
	
	
	
};
	
	
}


#endif
