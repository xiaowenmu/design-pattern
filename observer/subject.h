#ifndef SUBJECT_H
#define SUBJECT_H



#include"observer.h"

#include<vector>
#include<memory>
#include<atomic>
#include<mutex>

namespace observerPattern{
	
class Subject final{
public:
	Subject():state_(0){};
	
	int getState(){
		return state_.load();
	}
	
	void setState(int state){
		state_.store(state);
		notifyAll();
	}
	
	void attach(const std::weak_ptr<Observer> observer){
		std::lock_guard<std::mutex> lock(mutex_);
		observers_.push_back(observer);
	}
	
	void notifyAll(){
		std::lock_guard<std::mutex> loce(mutex_);
		auto itr = observers_.begin();
		while(itr != observers_.end()){
			std::shared_ptr<Observer> obj(itr->lock());
			if(obj){
				obj->update();
				++itr;
			}
			else{
				itr = observers_.erase(itr);
			}
		}
		
	}
	
	
private:
	std::vector<std::weak_ptr<Observer>> observers_;
	std::atomic<int> state_;
	std::mutex mutex_;
	
};


}

#endif
