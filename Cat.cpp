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

#include <cstring>
#include <iostream>


#include "Cat.h"

using namespace std;

//set all Cat attributes to "blank"
void Cat::initializeToZero() {
    memset (name, 0, MAX_CAT_NAME);
    gender = UNKNOWN_GENDER;
    breed = UNKOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

//Create the instance of a Cat object with all default values
Cat::Cat() {
    initializeToZero();
}


//getters
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


//setters
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




Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {

}
