#include <list>
#include <random>
#include <iostream>

#include "..\include\lab3\Product.h"
#include "..\include\lab3\GlobalFunctions.h"

using namespace std;

// Constructor vacío
Product::Product()
{
    string random_id = to_string(generateRandomId());
    this->code = random_id;
    this->description = "desc: " + random_id;
    this->price = 0;
}

// Constructor por puntero
Product::Product(Product *prod)
{
    this->code = prod->getCode();
    this->description = prod->getDescription();
    this->price = prod->getPrice();
}

// Constructor por data
Product::Product(string _description, float _price)
{
    string randomId = to_string(generateRandomId());
    this->code = randomId;
    this->description = _description;
    this->price = _price;
}

string Product::getCode()
{
    return this->code;
}

string Product::getDescription()
{
    return this->description;
}

float Product::getPrice()
{
    return this->price;
}

void Product::print()
{
    cout << "code: " << this->code << ", description: " << this->description << ", price: $" << this->price << endl;
}

Product::~Product() {}