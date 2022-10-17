//
// Created by User on 17.10.2022.
//

#ifndef IMPLEMENTATION_PARENT_HPP
#define IMPLEMENTATION_PARENT_HPP

#include "../utilities.hpp"

class Parent
{
public:
    Parent();

    virtual void printTheBegin() = 0;
    void printHomeStatus();

private:
    void establishRichStatusAndCountry();
    RichStatus ParentRichStatus;
    Country HomeCountry;

};


#endif //IMPLEMENTATION_PARENT_HPP
