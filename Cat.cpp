///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "Cat.h"


const char *Cat::getName() const {
    return name;
}

Gender Cat::getGender() const {
    return gender;
}

void Cat::setGender(Gender gender) {
    Cat::gender = gender;
}

Breed Cat::getBreed() const {
    return breed;
}

void Cat::setBreed(Breed breed) {
    Cat::breed = breed;
}

bool Cat::isCatFixed1() const {
    return isCatFixed;
}

void Cat::setIsCatFixed(bool isCatFixed) {
    Cat::isCatFixed = isCatFixed;
}

Weight Cat::getWeight() const {
    return weight;
}

void Cat::setWeight(Weight weight) {
    Cat::weight = weight;
}
