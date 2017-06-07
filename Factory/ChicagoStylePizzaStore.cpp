//
// Created by switch on 5/23/17.
//

#include "ChicagoStylePizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

Pizza *ChicagoStylePizzaStore::createPizza(PizzaType type) {
    Pizza *pizza = nullptr;

    switch (type)
    {
        case CheesePizza:
            pizza = new ChicagoStyleCheesePizza();
            break;
    }

    return pizza;
}
