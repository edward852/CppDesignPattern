//
// Created by switch on 5/23/17.
//

#ifndef FACTORY_NYPIZZASTORE_H
#define FACTORY_NYPIZZASTORE_H

#include "PizzaStore.h"

class NYStylePizzaStore: public PizzaStore
{
protected:
    Pizza *createPizza(PizzaType type) override ;
};


#endif //FACTORY_NYPIZZASTORE_H
