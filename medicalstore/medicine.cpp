#include"medicine.h"
#include<iostream>
#include <fstream>
#include <string>
using namespace std;



namespace Medical{
    
        Medicine::Medicine(int i=0,string nm="", string cat="", float p=0, int q=0) : ID(i), name(nm), category(cat), price(p), quantity(q) { }
        
        void Medicine::setID(int i)
        {
            ID = i;
        }
        int Medicine::getID()
        {
            return ID;
        }
        void Medicine::setName(string nm)
        {
            name = nm;
        }
        string Medicine::getName()
        {
            return name;
        }
        void Medicine::setCategory(string cat)
        {
            category = cat;
        }   
        string Medicine::getCategory()
        {
            return category;
        }


        void Medicine::setPrice(float p)
        {
            price = p;
        }
        float Medicine::getPrice()
        {
            return price;
        }
        void Medicine::setQuantity(int q)
        {
            quantity = q;
        }
        int Medicine::getQuantity()
        {
            return quantity;
        }
       
         istream & operator>>(istream &is, Medicine &med)
        {
            is >> med.ID;
            is.ignore();
            getline(is, med.name);
            is.ignore();
            getline(is, med.category);
            is.ignore();
            is >> med.price;
            is.ignore();
            is >> med.quantity;
            return is;
        }
        ostream & operator<<(ostream &os, const Medicine &med)
        {
            os << med.ID << endl;
            os << med.name << endl;
            os << med.category << endl;
            os << med.price << endl;
            os << med.quantity << endl;
            return os;
        }
        void Medicine::serialize(ofstream &outFile)
        {
            outFile << ID << endl;
            outFile << name << endl;
            outFile << category << endl;
            outFile << price << endl;
            outFile << quantity << endl;
        }
        void Medicine::deserialize(ifstream &inFile)
        {
            inFile >> ID;
            inFile.ignore();
            getline(inFile, name);
            inFile.ignore();
            getline(inFile, category);
            inFile.ignore();
            inFile >> price;
            inFile.ignore();
            inFile >> quantity;
        }
        void Medicine::display() const
        {
            cout << "ID: " << ID << endl;
            cout << "Name: " << name << endl;
            cout << "Category: " << category << endl;
            cout << "Price: " << price << endl;
            cout << "Quantity: " << quantity << endl;
        }
    }