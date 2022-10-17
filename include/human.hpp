//
// Created by marcj on 27.07.2022.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#pragma once

#include "trait.hpp"
#include "parents/parent.hpp"
#include "parents/father.hpp"
#include "parents/mother.hpp"

#include <iostream>
#include <string>

class Human
{
public:

    Human();

    void GetName();
    void GetTraits();

private:

    Father father;
    Mother mother;
    std::string name;
    std::vector<Trait> traits;
    uint8_t age;

};

#endif //HUMAN_HPP
