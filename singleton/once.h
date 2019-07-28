#ifndef LAZY_H
#define LAZY_H

#include<mutex>
#include<assert.h>
#include<pthread.h>

namespace single{
	
template<typename T>
class SingleTon final{
	
public:
	//SingleTon() = delete;
	//SingleTon(const SingleTon &) = delete;
	SingleTon& operator=(const SingleTon &input) = delete;
	
	static void init(){
		value_ = new T(1);
		
	}
	
	T* getInstance(){
		pthread_once(&ponce_, &SingleTon::init);
		assert(value_ != NULL);
		return value_;
	}

private:
	static pthread_once_t ponce_;
	static T*             value_;
};
	
	

template<typename T> 
pthread_once_t SingleTon<T>::ponce_ = PTHREAD_ONCE_INIT;

template<typename T> 
T* SingleTon<T>::value_ = nullptr;	
	
}

	

#endif
