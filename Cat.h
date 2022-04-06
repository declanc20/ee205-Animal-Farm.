///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include"config.h"


#define MAX_CAT_NAME (50)

class Cat {

protected: //Member varaibles only available to the Cat class
    char name [MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;

public: //public member varaibles
    Cat* next; //pointer to the next cat object

private:
    void initializeToZero();

public: //contructors
    Cat();

    Cat (const char* newName ,const Gender newGender,const Breed newBreed,const Weight newWeight);

public: //Getters and setters
    const char *getName() const;

    Gender getGender() const;

    void setGender(Gender gender);

    Breed getBreed() const;

    void setBreed(Breed breed);

    bool isCatFixed1() const;

    void setIsCatFixed(bool isCatFixed);

    Weight getWeight() const;

    void setWeight(Weight weight);


};

