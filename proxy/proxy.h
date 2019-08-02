#ifndef PROXY_H
#define PROXY_H

#include"check.h"
#include"logger.h"
#include"searcher.h"
#include"realSearcher.h"

#include<string>
#include<memory>

namespace proxy{

class Proxy{

public:
	Proxy():search_(new RealSearcher),check_(new Check),logger_(new Logger){}

	bool check(int id){
		return check_->check(id);
	}
	void log(){
		logger_->log();
	}
	void check(int key,std::string s){
		if(check(key)){
			search_->doSearch(s);
			log();
		}
	}

	
private:
	std::unique_ptr<Searcher> search_;
	std::unique_ptr<Check> check_;
	std::unique_ptr<Logger> logger_;
	
	
};

}



#endif
