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
#include"catDataBase.h"

#define MAX_CAT_NAME (50)

class Cat {
protected:
    char* name [MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;

};



