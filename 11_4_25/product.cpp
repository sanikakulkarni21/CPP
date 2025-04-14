#include<iostream>
#include<string>

using namespace std;
class Product{
    private:
    int id;
    string name;
    double price;

    public:
    Product(int i, string nm, double pr) : id(i), name(nm), price(pr) {}
    void setId(int i) {
         id = i; 
        }
    int getId() {
         return id;
         }
    void setName(string nm) {
         name = nm; 
        }
    string getName() { 
        return name; 
    }
    void setPrice(double pr) {
         price = pr; 
        }
    double getPrice() { 
        return price; 
    }
    void display() const {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }

~Product(){
        cout << "Destructor called product destroyed: "  << endl;
    }
};


    

int main() {
    Product p1(1, "mobile", 11000);
    p1.display();
    return 0;

}