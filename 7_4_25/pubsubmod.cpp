#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <future>
using namespace std;
void producer(promise<int> &p){
    this_thread::sleep_for(chrono::seconds(2));
    //produce data
    cout<< "Producer is processing data"<<endl;
    p.set_value(56);
}

void consumer(future<int> p){
    cout<< "Consumer is processing data"<<endl;
    int result = p.get(); //wait for data to be produced
    cout<< "Result= "<< result <<endl;
    
}

int main(){
    cout<< "Main processing started"<<endl;
    promise<int> p;
    future<int> f = p.get_future();

    thread thProducer(producer, ref(p));
    thread thConsumer(consumer,move(f)); 

    thProducer.join();
    thConsumer.join();

    cout<< "Main processing completed"<<endl;

}