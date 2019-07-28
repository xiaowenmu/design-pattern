//#include"lazy.h"
//#include"hungry.h"
#include"once.h"

#include<thread>
#include<chrono>
#include<iostream>

void fun1(){
	std::this_thread::sleep_for(std::chrono::milliseconds(20));
	single::SingleTon<int> one;
	while(1){
		
		int *a = one.getInstance();
		std::cout<<*a<<std::endl;
		std::this_thread::yield();
		
	}
	
}
void fun2(){
	std::this_thread::sleep_for(std::chrono::milliseconds(20));
	single::SingleTon<int> one;
	while(1){
		
		int *a = one.getInstance();
		std::cout<<*a<<std::endl;
		std::this_thread::yield();
		
	}
	
}

void fun3(){
	std::this_thread::sleep_for(std::chrono::milliseconds(20));
	single::SingleTon<int> one;
	while(1){
		
		int *a = one.getInstance();
		std::cout<<*a<<std::endl;
		std::this_thread::yield();
		
	}
	
}

int main(){
	std::thread thread1(fun1);
	std::thread thread2(fun2);
	std::thread thread3(fun3);
	
	thread1.join();
	thread2.join();
	thread3.join();
	return 0;
	
	
}
