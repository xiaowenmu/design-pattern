#ifndef REALSEARCHER_H
#define REALSEARCHER_H

#include"searcher.h"

#include<string>
#include<iostream>



namespace proxy{

class RealSearcher:public Searcher{
public:
	void doSearch(std::string s){
		if(s == "yangguo")
			std::cout<<"is yangguo"<<std::endl;
		else
			std::cout<<"is not yangguo"<<std::endl;
			
	}
	
	
};


}


#endif
