#ifndef LOGGER_H
#define LOGGER_H

#include<iostream>


namespace proxy{

class Logger{
	
public:
	void log(){
		std::cout<<"logger"<<std::endl;
	}
	
};

}

#endif