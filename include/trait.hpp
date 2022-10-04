//
// Created by User on 04.10.2022.
//

#ifndef PERSONALITY_GENERATOR_TRAIT_HPP
#define PERSONALITY_GENERATOR_TRAIT_HPP

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

#endif //PERSONALITY_GENERATOR_TRAIT_HPP
