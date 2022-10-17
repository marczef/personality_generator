//
// Created by User on 17.10.2022.
//

#ifndef IMPLEMENTATION_MOTHER_HPP
#define IMPLEMENTATION_MOTHER_HPP

#include "parent.hpp"
#include "father.hpp"

class Mother : public Parent
{
public:
    Mother() = delete;
    Mother(const Father &father);

    void printTheBegin();
};

#endif //IMPLEMENTATION_MOTHER_HPP
