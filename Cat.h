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
#include"convertenum.h"


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

    void setGender(Gender gender);

    void setBreed(Breed breed);

private:
    void dataToZero();

public: //contructors
    Cat();

    Cat (const char* newName ,const Gender newGender,const Breed newBreed,const Weight newWeight);

public: //desturctor
   virtual ~Cat();

public: //Public Getters and setters
    void setName(const char* newName);

    const char *getName() const;


    Gender getGender() const;

    Breed getBreed() const;

    bool getIsCatFixed() const;

    Weight getWeight() const;

    void setWeight(Weight weight);

    void setCatToFixed();

//cant change a cats breed or gender so protect these

public: //validation functions
    bool validateName(const char* newName);
    bool validateGender(const Gender newGender  );
    bool validateBreed(const Breed newBreed  );
    bool validateWeight(const Weight newWeight );

public: //public functions
    bool validate();
    bool print();
};

