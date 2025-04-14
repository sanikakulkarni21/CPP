#include <iostream>
#include <future>
#include <thread>
#include <chrono>
#include <memory>


using namespace std;

class view{
public:
virtual void render(shared_future<string>dataFuture)=0;
virtual ~view(){}
};

class TopView: public view{ 
public:
void render(shared_future<string>dataFuture)override{
    thread([dataFuture()]){
        

    }
}
};