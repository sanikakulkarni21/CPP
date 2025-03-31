#ifndef _MEDICINE_H
#define _MEDICINE_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace Medical{
class Medicine {
private:
    int ID;
    string name;
    string category;
    float price;
    int quantity;

public:
    Medicine(int i=0,string nm="", string cat="", float p=0, int q=0);

    void setID(int i);
    int getID() ;
    void setName(string nm);
    string getName();
    void setCategory(string cat);
    string getCategory();
    void setPrice(float p);
    float getPrice();
    void setQuantity(int q);
    int getQuantity();

    friend istream& operator>>(istream &is, Medicine &med);
       
        friend ostream& operator<<(ostream &os, const Medicine &med);

        
    void serialize(ofstream &outFile) ;
    void deserialize(ifstream &inFile);
    
    void display() const;
};
}
#endif 