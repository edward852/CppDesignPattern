#include <iostream>
#include "Coffee.h"
#include "Tea.h"
#include "CoffeeWithHook.h"

using namespace std;

int main() {
    Tea tea;
    Coffee coffee;
    CoffeeWithHook coffeeWithHook;

    tea.prepareRecipe();
    cout<<endl;
    coffee.prepareRecipe();
    cout<<endl;
    coffeeWithHook.prepareRecipe();

    return 0;
}