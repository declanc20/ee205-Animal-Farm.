///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file convertEnum.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include<string.h>
#include<stdio.h>
#include<stdbool.h>
#include"catDataBase.h"
#include<cstring>
#include"convertenum.h"
#include"config.h"

/*converts enum Color value to Color name as a string*/
/*char* colorName(const enum Color Color){
    switch(Color){
        case 0: return "BLACK";
        case 1: return "WHITE";
        case 2: return "RED";
        case 3: return "BLUE";
        case 4: return "GREEN";
        case 5: return "PINK";
    }
    return "NULL";
}*/

/*converts enum breed value to breed name as string*/
const char* breedName(const enum Breed breed){
    switch(breed){
        case 0: return "UNKNOWN_BREED";
        case 1: return "MAINE_COON";
        case 2: return "MANX";
        case 3: return "SHORTHAIR";
        case 4: return "PERSIAN";
        case 5: return "SPHYNX";
    }
    return "NULL";
}




