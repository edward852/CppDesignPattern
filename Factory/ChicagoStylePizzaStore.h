//
// Created by switch on 5/23/17.
//

#ifndef FACTORY_CHICAGOPIZZASTORE_H
#define FACTORY_CHICAGOPIZZASTORE_H

#include "PizzaStore.h"

class ChicagoStylePizzaStore: public PizzaStore
{
protected:
    Pizza *createPizza(PizzaType type) override ;
};


#endif //FACTORY_CHICAGOPIZZASTORE_H
