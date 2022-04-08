///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDataBase.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once

#include<stdio.h>
#include<stdbool.h>
#include "Cat.h"

#define MAX_CATS (1024)
#define MAX_NAME (50)
#define FALSE 0
#define TRUE 1

    typedef float Weight;
    const Weight UNKOWN_WEIGHT = -1; //unknwn weight is a non possible weight

extern Cat* catDatabaseHeadPointer;

extern int numOfCats;

extern bool validateDatabase();

