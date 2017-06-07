#include <iostream>
#include <memory>

#include "NYStylePizzaStore.h"
#include "ChicagoStylePizzaStore.h"

using namespace std;

int main()
{
    NYStylePizzaStore nyPizzaStore;
    ChicagoStylePizzaStore chicagoPizzaStore;
    Pizza *pizza = nullptr;
    shared_ptr<int> pInt(nullptr);

    cout<<"pInt is "<<((nullptr == pInt)?"": "not " )<<"null"<<endl;

    pizza = nyPizzaStore.orderPizza(CheesePizza);
    cout<<"Ethan ordered a "<< pizza->getName() <<endl<<endl;
    delete pizza;

    pizza = chicagoPizzaStore.orderPizza(CheesePizza);
    cout<<"Joel ordered a "<< pizza->getName() <<endl;
    delete pizza;

    return 0;
}