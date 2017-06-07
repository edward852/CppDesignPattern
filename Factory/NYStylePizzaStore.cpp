//
// Created by switch on 5/23/17.
//

#include "NYStylePizzaStore.h"
#include "NYStyleCheesePizza.h"

Pizza *NYStylePizzaStore::createPizza(PizzaType type) {
    Pizza *pizza = nullptr;

    switch (type)
    {
        case CheesePizza:
            pizza = new NYStyleCheesePizza();
            break;
    }

    return pizza;
}
