#ifndef LAZY_H
#define LAZY_H

#include<mutex>

namespace single{
	
template<typename T>
class SingleTon final{
	
public:
	//SingleTon() = delete;
	//SingleTon(const SingleTon &) = delete;
	SingleTon & operator=(const SingleTon &input) = delete;
	
	T* getInstance(){
		if(target.load() == nullptr){
			std::lock_guard<std::mutex> lock(mutex_);
			if(target.load() == nullptr){
				target.load(new SingleTon);
			}
		}
		return target;
	}

private:
	static std::atomic<T *> target;
	static std::mutex mutex_;
	
	
	
};
	
	
template<typename T>
T *SingleTon<T>::target = nullptr;
	
	
	
	
	
	
}


#endif