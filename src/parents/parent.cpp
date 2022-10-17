//
// Created by User on 17.10.2022.
//
#include "parents/parent.hpp"

Parent::Parent()
{
    establishRichStatusAndCountry();
}

void Parent::establishRichStatusAndCountry()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<std::size_t> dis_country(0, Countries.size()-1);
    std::size_t number = dis_country(gen);
    HomeCountry = Countries[number];

    std::uniform_real_distribution<> dis_rich_level(0.0, 1.0);
    auto chance = dis_rich_level(gen);

    if (chance < HomeCountry.ChanceOfBeingPoor)
    {
        ParentRichStatus = Poor;
    }
    else if (chance >= HomeCountry.ChanceOfBeingPoor && chance <= HomeCountry.ChanceOfBeingModeratelyWealthy + HomeCountry.ChanceOfBeingPoor)
    {
        ParentRichStatus = ModeratelyWealthy;
    }
    else
    {
        ParentRichStatus = Rich;
    }
}

void Parent::printHomeStatus()
{
    std::cout<<"You were born in "<<HomeCountry.name;
    std::cout<<" in a ";
    if (ParentRichStatus == 0)
    {
        std::cout<<"poor family"<<std::endl;
    }
    else if (ParentRichStatus == 1)
    {
        std::cout<<"moderately wealthy family"<<std::endl;
    }
    else if (ParentRichStatus == 2)
    {
        std::cout<<"rich family"<<std::endl;
    }
}