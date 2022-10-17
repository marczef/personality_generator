//
// Created by User on 17.10.2022.
//
#include "parents/mother.hpp"

Mother::Mother(const Father &father) : Parent(father) {}

void Mother::printTheBegin() {std::cout<<"mother is not abstract";}