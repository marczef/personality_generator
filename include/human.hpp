//
// Created by marcj on 27.07.2022.
//

#ifndef SIMPLE_EXAMPLE_HUMAN_HPP
#define SIMPLE_EXAMPLE_HUMAN_HPP

#include <iostream>
#include <string>

class Human
{
public:

    Human(std::string name);

    void wypisz_imie();

private:

    std::string name;

};

#endif //SIMPLE_EXAMPLE_HUMAN_HPP
