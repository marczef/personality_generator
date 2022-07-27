//
// Created by marcj on 27.07.2022.
//

#include "human.hpp"

Human::Human(std::string name) : name(name)
{
    std::cout<<"hello"<<std::endl;
}

void Human::wypisz_imie()
{
    std::cout<<"imie to "<<name<<std::endl;

}