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
#include <stdexcept>


#include "Cat.h"
#include"config.h"

using namespace std;

//set all Cat attributes to "blank"
void Cat::initializeToZero() {
    memset (name, 0, MAX_CAT_NAME);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

//Create the instance of a Cat object with all default values
Cat::Cat() {
    initializeToZero();
}

//contructor to populate the instance of the cat object with actual inputted information
Cat::Cat (const char* newName ,const Gender newGender,const Breed newBreed,const Weight newWeight){


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
void Cat::setName(char* newName) {
    strcpy(Cat::name,newName);
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

//validation functions/methods
bool Cat::validateName(const char* newName){

    if (newName == nullptr) {
        throw invalid_argument(PROGRAM_TITLE "name can't be nullptr");
    }

    if (strlen(newName) <= 0) {
        throw (PROGRAM_TITLE "name can't be blank");
    }

    if (strlen(newName) > MAX_CAT_NAME){
        throw (PROGRAM_TITLE "name can't be longer than MAX_CAT_NAME");
    }

    else{
        return true;
    }
}

bool validateGender(const Gender newGender  ){
    if (newGender == UNKNOWN_GENDER){
        throw (PROGRAM_TITLE "gender must be known");
    }

    else {
        return true;
    }
}

bool validateBreed(const Breed newBreed  ){
    if (newBreed == UNKNOWN_BREED){
        throw (PROGRAM_TITLE "gender must be known");
    }

    else{
        return true;
    }
}

bool validateWeight(const Weight newWeight ){
    if(newWeight <= 0){
        throw (PROGRAM_TITLE "Weight must be greater than 0");
    }

    else {
        return true;
    }
}



