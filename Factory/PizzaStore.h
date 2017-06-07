//
// Created by switch on 5/23/17.
//

#ifndef FACTORY_PIZZASTORE_H
#define FACTORY_PIZZASTORE_H

#include "Pizza.h"

class PizzaStore
{
public:
    Pizza *orderPizza(PizzaType type)
    {
        Pizza *pizza = createPizza(type);

        if (nullptr==pizza)
        {
            return nullptr;
        }

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

protected:
    virtual Pizza *createPizza(PizzaType type) = 0;
};


#endif //FACTORY_PIZZASTORE_H
