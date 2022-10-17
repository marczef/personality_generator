//
// Created by User on 04.10.2022.
//

#ifndef TRAIT_HPP
#define TRAIT_HPP

#include "utilities.hpp"

#include <iostream>
#include <stdio.h>


class Trait
{
public:

    Trait(double_t chanceOfGoodTrait);

    std::string GetNameOfTrait();

private:

    std::string nameOfTrait;

};

#endif //TRAIT_HPP
