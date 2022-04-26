///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "config.h"
#include "Animal.h"

Animal::Animal( const Weight::t_weight newMaxWeight
        ,const std::string&     newClassification
        ,const std::string&     newSpecies
){

}

const std::string &Animal::getKingdomName() {
    return KINGDOM_NAME;
}

void Animal::setSpecies(const std::string &species) {
    Animal::species = species;
}

void Animal::setClassification(const std::string &classification) {
    Animal::classification = classification;
}

void Animal::setWeight(const Weight &weight) {
    Animal::weight = weight;
}
