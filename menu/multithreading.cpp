#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
void print_hello() {
    while(true){
        cout << "Hello from a secondary thread 1!" << endl;
        this_thread::sleep_for(chrono::seconds(3));
    }       
}
void print_Bye() {
        while(true){
            cout << "Bye from a secondary thread 2!" << endl;
           this_thread::sleep_for(chrono::seconds(5));
        }
}

int main() {
    cout<<"Primary Thread Exeuction is started."<<endl;
    thread tHello(print_hello);  
    thread tBye(print_Bye);
    tHello.join();  
    tBye.join();
    cout<<"Primary Thread Execution is about to terminate"<<endl;
    return 0;
}