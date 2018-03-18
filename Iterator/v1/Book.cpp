//
// Created on 2018/3/18.
//

#include <iostream>

#include "Book.h"

using namespace std;

Book::Book(const std::string &name)
        : name(name)
{

}

Book::~Book()
{
    cout<<"~Book() "<<name<<endl;
}

std::string Book::getName() const
{
    return name;
}
