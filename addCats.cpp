///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "Cat.h"
#include"addCats.h"
#include"config.h"
#include"catDataBase.h"
#include <cstring>
#include<iostream>
#include<cassert>

using namespace std;

bool addCat(Cat* newCat){
    assert(validateDatabase()); //call validateDatabse before adding the cat
    newCat -> validate(); //call validate on the new cat before adding it

    //actually add the cat
    newCat->next =catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    numOfCats++;

    //Validate the database again after adding the cat
    validateDatabase();

}