//
// Created by marcj on 27.07.2022.
//

#ifndef SIMPLE_EXAMPLE_HUMAN_HPP
#define SIMPLE_EXAMPLE_HUMAN_HPP

#pragma once

#include "trait.hpp"

#include <iostream>
#include <string>

class Human
{
public:

    Human(std::string name);

    void GetName();
    void GetTraits();

private:

    std::string name;
    std::vector<Trait> traits;
    uint8_t age;

};

#endif //SIMPLE_EXAMPLE_HUMAN_HPP
