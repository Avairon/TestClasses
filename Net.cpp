#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;;

class Item {
public:
    int productID, categoryID, brandID, salerID;
    string name;

    Item() {

    }
    Item(string Name, int Product, int Category, int Brand, int Saler) {
        productID = Product;
        categoryID = Category;
        brandID = Brand;
        salerID = Saler;
        name = Name;
    }
};

class Category {
public:
    int id;
    string category;

    Category() {

    }
    Category(int ID, string Category){
        id = ID;
        category = Category;
    }
};

class Salers {
public:

    int id;
    string saler;

    Salers() {

    }
    Salers(int ID, string Saler) {
        id = ID;
        saler = Saler;
    }
};

class Brands {
public:
    int id;
    string brand;

    Brands() {

    }
    Brands(int ID, string Brand) {
        id = ID;
        brand = Brand;
    }
};

int main() {
    Item* cola = new Item("Cola", 0, 0, 0, 0);
    Item* burger = new Item("Burger", 1, 1, 0, 0);
    Item* battery = new Item("Battery", 2, 2, 1, 1);

    Item items[3] = {*cola, *burger, *battery};
    Category category[3] = {*new Category(0, "Eat"), *new Category(1, "Drinks"), *new Category(2, "Battery")};
    Salers salers[2] = { *new Salers(0, "Havai"), *new Salers(1, "Charger")};
    Brands brands[2] = { *new Brands(0, "Food"), *new Brands(1, "Batareiki") };
    
    for (int i = 0, i < 3, i++) {
        cout << "Id = " << items[i]->productID << " Name: " << items[i]->name << " Categoty: " << category[items[i]->categoryID]->category << " Brand: " << brands[items[i]->brandID]->brand << " Saler: " << salers[items[i]->salerID]->saler << "\n";
    }
}
