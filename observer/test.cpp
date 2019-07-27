#include"subject.h"
//#include"observer.h"
#include"concretObserver.h"

#include<thread>
#include<chrono>
#include<vector>

observerPattern::Subject subject;



void fun(){
	
	while(1){
		
		std::shared_ptr<observerPattern::ConcretObserver> observer = std::make_shared<observerPattern::ConcretObserver>(&subject);
		subject.attach(observer);
		//subject.attach(observer);
		std::this_thread::sleep_for(std::chrono::milliseconds(2));
		
	}
	return ;
	
	
}


void fun1(){
	std::vector<std::shared_ptr<observerPattern::ConcretObserver>> save;
	for(int i = 0; i < 2000; ++i){
		std::shared_ptr<observerPattern::ConcretObserver> observer = std::make_shared<observerPattern::ConcretObserver>(&subject);
		save.push_back(observer);
		subject.attach(observer);
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}
	while(1);
}


void fun2(){
	int i = 0;
	while(1){
		subject.setState(i);
		++i;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}
}

int main(){
	
	std::thread thread1(fun);
	std::thread thread2(fun1);
	std::thread thread3(fun2);
	
	thread3.join();
	thread2.join();
	thread1.join();
	
	return 0;
	
	
}
