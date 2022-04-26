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

const std::string Animal::KINGDOM_NAME = "Animalia";



//minimal consturctor to populate classification and species, inherits from node and weight
Animal::Animal( const Weight::t_weight newMaxWeight
        ,const std::string&     newClassification
        ,const std::string&     newSpecies): Node(), weight(Weight::POUND, newMaxWeight)
{
    species = newSpecies;
    classification = newClassification;
    Animal::validate();
}

//populate all member varaibles
Animal::Animal( const Gender           newGender
        ,const Weight::t_weight newWeight
        ,const Weight::t_weight newMaxWeight
        ,const std::string&     newClassification
        ,const std::string&     newSpecies): Node(), weight(newWeight, newMaxWeight)
{
    species = newSpecies;
    classification = newClassification;
    setGender(newGender);
    Animal::validate();
}

std::string Animal::getKingdom() const noexcept {        ///< Get the kingdom, which is `Animalia`
    return KINGDOM_NAME;
}

    std::string Animal::getClassification() const noexcept {  ///< Get the classification
    return classification;
    }

    std::string Animal::getSpecies() const noexcept {         ///< Get the species
    return species;
    }

    Gender Animal::getGender() const noexcept{  ///< Get the Animal's Gender
    return gender;
    }

    Weight::t_weight Animal::getWeight() const noexcept {         ///< Get the Animal's Weight
    return weight.getWeight();
    }

    void Animal::setWeight( const Weight::t_weight newWeight ) {  ///< Set the Animal's Weight
        weight.setWeight(newWeight);
    }

    void Animal::setGender( const Gender newGender){
    validate();
    gender= newGender;
    validate();
    }

    w