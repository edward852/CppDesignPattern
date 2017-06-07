//
// Created by switch on 5/24/17.
//

#ifndef COMMAND_LIGHT_H
#define COMMAND_LIGHT_H

#include <string>

class Light {
public:
    Light(std::string loc);

    void on();
    void off();

private:
    std::string location;
};


#endif //COMMAND_LIGHT_H
