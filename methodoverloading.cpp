#include<iostream>
using namespace std;

class Mathengine {
    public:
    //method overloading(function overloading)
   
        int add(int num1, int num2) {
            return num1 + num2;
        }

        int add(int num1, int num2, int num3) {
            return num1+ num2 + num3;
        }
};

int main() {
   Mathengine * pMathEngine= new Mathengine();
   int result=pMathEngine->add(2,3);
   cout<<"Result="<<result;

   int output=pMathEngine->add(2,3,4);
   cout<<"\nOutput="<<output;

}