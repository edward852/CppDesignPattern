//
// Created by switch on 5/31/17.
//

#include <iostream>
#include <boost/algorithm/string.hpp>
#include <boost/locale/collator.hpp>
#include <boost/locale/generator.hpp>

#include "CoffeeWithHook.h"

using namespace boost::locale;
using namespace std;

void CoffeeWithHook::brew() {
    cout<<"Dripping Coffee through filter"<<endl;
}

void CoffeeWithHook::addCondiments() {
    cout<<"Adding Sugar and Milk"<<endl;
}

bool CoffeeWithHook::customerWantsCondiments() {
    string input;
    string yesAns = "yes";

    cout<<"Would you like sugar and milk?(yes or no):"<<endl;
    getline(cin, input);
    //cout<<input<<endl;

#if 1
    generator gen;
    std::locale loc = gen("");
    const collator<char>& ccf = std::use_facet<collator<char>>(loc);

    if (0 == ccf.compare(collator_base::primary, input, yesAns))
    {
        return true;
    }
#else
    if (boost::iequals(input, yesAns))
    {
        return true;
    }
#endif

    return false;
}
