//
// Created by switch on 5/23/17.
//
#include <iostream>
#include "ChicagoStyleCheesePizza.h"

using namespace std;

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra thick Crust Dough";
    sauce = "Plum Tomato Sauce";
}

void ChicagoStyleCheesePizza::cut() {
    cout<< "Cutting the pizza into square slices" <<endl;
}
