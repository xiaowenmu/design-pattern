#ifndef LAZY_H
#define LAZY_H

#include<mutex>
#include<atomic>

namespace single{
	
template<typename T>
class SingleTon final{
	
public:
	//SingleTon() = delete;
	//SingleTon(const SingleTon &) = delete;
	SingleTon & operator=(const SingleTon &input) = delete;
	
	T* getInstance(){
		if(target_.load() == nullptr){
			std::lock_guard<std::mutex> lock(mutex_);
			if(target_.load() == nullptr){
				target_.store(new T(1));
			}
		}
		return target_.load();
	}

private:
	static std::atomic<T *> target_;
	static std::mutex mutex_;
	
	
	
};
	
template<typename T>
std::atomic<T *> SingleTon<T>::target_(nullptr);


template<typename T>
std::mutex SingleTon<T>::mutex_;

	
	
	
	
	
}


#endif
