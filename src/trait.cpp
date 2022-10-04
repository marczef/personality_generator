#include "trait.hpp"

Trait::Trait(double_t chanceOfGoodTrait)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);

    auto chance = dis(gen);

    if (chance >= chanceOfGoodTrait)
    {
        std::uniform_int_distribution<std::size_t> distribution(0, NegativeTraits.size() - 1);
        std::size_t number = distribution(gen);
        nameOfTrait = NegativeTraits[number];
    }
    else if (chance < chanceOfGoodTrait)
    {
        std::uniform_int_distribution<std::size_t> distribution(0, PositiveTraits.size() - 1);
        std::size_t number = distribution(gen);
        nameOfTrait = PositiveTraits[number];
    }
}

std::string Trait::GetNameOfTrait()
{
    return nameOfTrait;
}

