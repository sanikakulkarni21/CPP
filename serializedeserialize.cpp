#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace Store {
    class Product {
        private:
            int productId;
            string productName;
            double price;

        public:
            Product(int id = 0, string name = "", double p = 0.0) : productId(id), productName(name), price(p) {}

            friend istream& operator>>(istream& is, Product& prod) {
                is >> prod.productId;
                is.ignore();
                getline(is, prod.productName);
                is >> prod.price;
                is.ignore();
                return is;
            }

            friend ostream& operator<<(ostream& os, const Product& prod) {
                os << prod.productId << endl;
                os << prod.productName << endl;
                os << prod.price << endl;
                return os;
            }
    };
}

using namespace Store;

void serialize(Product product) {
    ofstream outFile("product.txt");
    if (outFile.is_open()) {
        outFile << product;
        outFile.close();
    } else {
        cerr << "File opening error for writing" << endl;
    }
}

void deSerialize(Product& product) {
    ifstream inFile("product.txt");
    if (inFile.is_open()) {
        inFile >> product;
        inFile.close();
    }
}

int main() {
    Product p1(101, "Laptop", 75000.99);
    serialize(p1);

    Product p2;
    deSerialize(p2);
    cout << "Object Retrieved from File product.txt" << endl;
    cout << p2 << endl;

    return 0;
}
