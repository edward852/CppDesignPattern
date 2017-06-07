//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_AIRCONDITIONER_H
#define COMMAND_AIRCONDITIONER_H

#include <string>

class Airconditioner {
public:
    Airconditioner(std::string loc);

    void on();
    void off();

private:
    std::string location;
};


#endif //COMMAND_AIRCONDITIONER_H
