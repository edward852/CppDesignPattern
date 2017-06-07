//
// Created by switch on 5/23/17.
//

#ifndef DECORATOR_BEVERAGE_H
#define DECORATOR_BEVERAGE_H

#include <string>

class Beverage {
public:
    Beverage(std::string desc = "Unknown Beverage")
    {
        m_description = desc;
    }
    virtual std::string getDescription()
    {
        return m_description;
    }
    virtual double cost() = 0;

private:
    std::string m_description;
};


#endif //DECORATOR_BEVERAGE_H
