#ifndef LAZY_H
#define LAZY_H



namespace single{
	
template<typename T>
class SingleTon final{
	
public:
	//SingleTon() = delete;
	//SingleTon(const SingleTon &) = delete;
	SingleTon & operator=(const SingleTon &input) = delete;
	
	T* getInstance(){
		return target;
	}

private:
	static T *target;
	
	
	
};
	
	
template<typename T>
T *SingleTon<T>::target = new T;
	
	
	
	
	
	
}


#endif
