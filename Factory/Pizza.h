//
// Created by switch on 5/23/17.
//

#ifndef FACTORY_PIZZA_H
#define FACTORY_PIZZA_H

#include <iostream>
#include <string>

typedef enum {
    CheesePizza = 0,
    VeggiePizza,
    ClamPizza,
    PepperoniPizza
} PizzaType;

class Pizza
{
public:
    void prepare()
    {
        std::cout<< "Preparing "<< name <<std::endl;
        std::cout<< "Tossing dough..." <<std::endl;
        std::cout<< "Adding sauce..." <<std::endl;
    }
    void bake()
    {
        std::cout<< "Bake for 25 minutes" <<std::endl;
    }
    // may override
    virtual void cut()
    {
        std::cout<< "Cutting the pizza into diagonal slices" <<std::endl;
    }
    void box()
    {
        std::cout<< "Place pizza in official PizzaStore box" <<std::endl;
    }
    std::string getName()
    {
        return name;
    }

protected:
    std::string name;
    std::string dough;
    std::string sauce;
};


#endif //FACTORY_PIZZA_H
