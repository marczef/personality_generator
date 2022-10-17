//
// Created by User on 17.10.2022.
//

#ifndef IMPLEMENTATION_FATHER_HPP
#define IMPLEMENTATION_FATHER_HPP

#include "parent.hpp"

class Father : public Parent
{
    friend class Mother;
public:
    void printTheBegin();
};

#endif //IMPLEMENTATION_FATHER_HPP
