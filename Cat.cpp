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
void Cat::dataToZero() {
    memset (name, 0, MAX_CAT_NAME);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

//Create the instance of a Cat object with all default values
Cat::Cat() {
    dataToZero();
}

//contructor to populate the instance of the cat object with actual inputted information
Cat::Cat (const char* newName ,const Gender newGender,const Breed newBreed,const Weight newWeight){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

//destructor of data
Cat::~Cat(){
    dataToZero();
}


//getters and setters

void Cat::setName(const char* newName) {
    Cat::validateName(newName);
    strcpy(Cat::name, newName);
}

const char *Cat::getName() const {
    return name;
}

void Cat::setGender(Gender newGender) {
    if ( gender != UNKNOWN_GENDER){
        throw (PROGRAM_TITLE "Can't change a cat's Gender");
    }
    Cat::validateGender(newGender);
    Cat::gender = newGender;
}

Gender Cat::getGender() const {
    return gender;
}

void Cat::setBreed(Breed newBreed) {
    if ( breed != UNKNOWN_BREED){
        throw (PROGRAM_TITLE "Can't change a cat's Gender");
    }
    Cat::validateBreed(newBreed);
    Cat::breed = newBreed;
}

Breed Cat::getBreed() const {
    return breed;
}


bool Cat::getIsCatFixed() const {
    return isCatFixed;
}

void Cat::setCatToFixed() {
    Cat::isCatFixed = isCatFixed;
}

void Cat::setWeight(Weight weight) {
    Cat::validateWeight(weight);
    Cat::weight = weight;
}

Weight Cat::getWeight() const {
    return weight;
}


//validation functions/methods
bool Cat::validateName(const char* newName){

    if (newName == nullptr) {
        throw (PROGRAM_TITLE "name can't be nullptr");
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

bool Cat::validateGender(const Gender newGender  ){
    if (newGender == UNKNOWN_GENDER){
        throw (PROGRAM_TITLE "gender must be known");
    }

    else {
        return true;
    }
}

bool Cat::validateBreed(const Breed newBreed  ){
    if (newBreed == UNKNOWN_BREED){
        throw (PROGRAM_TITLE "gender must be known");
    }

    else{
        return true;
    }
}

bool Cat::validateWeight(const Weight newWeight ){
    if(newWeight <= 0){
        throw (PROGRAM_TITLE "Weight must be greater than 0");
    }

    else {
        return true;
    }
}

bool Cat::validate(){
    try {
        validateName(name);
        validateBreed(breed);
        validateGender(gender);
        validateWeight(weight);
    }
    catch(const char* txtException){ //if any of these validations fail, print the error to console
        cout<< "Exception" << txtException <<endl;
    }

    return true;

}



