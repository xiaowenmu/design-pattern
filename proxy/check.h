#ifndef CHECK_H
#define CHECK_H

#include<iostream>

namespace proxy{

class Check{
	
public:
	bool check(int id){
		if(id == 0){
			std::cout<<"log in"<<std::endl;
			return true;
		}
		else{
			std::cout<<"invilid user"<<std::endl;
			return false;
		}
	}
	
};


}

#endif
