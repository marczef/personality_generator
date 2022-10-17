//
// Created by User on 04.10.2022.
//

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#pragma once

#include <iostream>
#include <string>
#include <random>

const std::vector<std::string> PositiveTraits = {
        "aspiring",
        "assertive",
        "charismatic",
        "confident",
        "gentle",
        "genuine",
        "humorous",
        "intelligent"};

const std::vector<std::string> NeutralTraits = {};

const std::vector<std::string> NegativeTraits =
        {"airy",
         "anxious",
         "argumentative",
         "complaintive",
         "cowardly",
         "cruel",
         "dull",
         "possessive",
         "stupid"};

struct Country
{
    std::string name;
    float ChanceOfBeingPoor;
    float ChanceOfBeingModeratelyWealthy;
    float ChanceOfBeingRich;

    Country() : name(""), ChanceOfBeingPoor(0), ChanceOfBeingModeratelyWealthy(0), ChanceOfBeingRich(0) {}

    Country(std::string name, float ChanceOfBeingPoor, float ChanceOfBeingModeratelyWealthy, float ChanceOfBeingRich) :
            name(name), ChanceOfBeingPoor(ChanceOfBeingPoor), ChanceOfBeingModeratelyWealthy(ChanceOfBeingModeratelyWealthy),
            ChanceOfBeingRich(ChanceOfBeingRich) {}
};

const std::vector<Country> Countries =
        {
            Country("Poland", 0.3, 0.6, 0.1),
            Country("Germany", 0.2, 0.5, 0.3),
            Country("Norway", 0, 0.6, 0.4),
            Country("Etopia", 0.75, 0.2, 0.05),
            Country("USA", 0.4, 0.2, 0.4),
            Country("Japan", 0.1, 0.5, 0.4)
        };

enum RichStatus
{
    Poor, ModeratelyWealthy, Rich
};

#endif //UTILITIES_HPP
