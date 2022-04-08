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
#include <iostream>
#include <iomanip>
#include<cassert>

#include "Cat.h"
#include"config.h"
#include"convertenum.h"

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
        throw (PROGRAM_TITLE "Can't change a cat's Breed");
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
    Cat::isCatFixed = true;
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

bool Cat::validate() {
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

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() {
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << getIsCatFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}



