//
// Created by marcj on 27.07.2022.
//

#include "human.hpp"

Human::Human() : mother(father)
{
    GetName();

    father = Father();
    father.printHomeStatus();

    traits.push_back(Trait(0.5));
}

void Human::GetName()
{
    std::cin>>name;
    std::cout<<"Your characters name is:  "<<name<<std::endl;
}

void Human::GetTraits()
{
    std::string sentence;
    sentence += "Your character is:";
    for(auto trait = traits.begin(); trait != traits.end(); trait++)
    {
        sentence += " " + trait->GetNameOfTrait() + ",";
    }
    sentence.pop_back();
    std::cout<<sentence;
}