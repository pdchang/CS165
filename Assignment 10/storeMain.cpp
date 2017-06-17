#include "Store.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    Store myStore;
    Customer test("erik", "123", 0);
    Customer t2("erik", "500", true);
    Customer *ptrTest = &test;
    Customer *ptrt2 = &t2;
    Product widget("111", "widget", "this is a test widget dick", 100.75, 3);
    Product widget2("111", "penis", "this is a penis", 100, 5);
    Product *p = &widget2;
    Product *ptrWidget = &widget;
    std::string pID = "111";
    
    myStore.addProduct(ptrWidget);
    myStore.addProduct(p);
    myStore.productSearch("dick");

    
    return 0;
}
