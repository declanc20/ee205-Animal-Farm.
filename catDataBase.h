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

#define MAX_CATS (1024)
#define MAX_NAME (50)
#define FALSE 0
#define TRUE 1


//enum Gender{ UNKNOWN_GENDER, MALE, FEMALE };
//enum Breed{ UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
//enum Color{ BLACK, WHITE, RED, BLUE, GREEN, PINK};

/*struct Cat {  //database is
    char                 name[MAX_NAME];
    enum                 Gender gender;
    enum                 Breed breed;
    bool                 isFixed;
    float                weight;
    enum                 Color collarColor1;
    enum                 Color collarColor2;
    unsigned long long   license;
};*/

    typedef float Weight;
    const Weight UNKOWN_WEIGHT = -1; //unknwn weight is a non possible weight
    //typedef int   NumCats;
//extern struct Cat dataBase[MAX_CATS];

//extern NumCats numOfCats; //global variable for number of cats in database
