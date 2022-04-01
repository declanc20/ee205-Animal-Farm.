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

#include<string.h>
#include<stdio.h>
#include<stdbool.h>
#include"catDataBase.h"
#include"addCats.h"
#include"config.h"

/*bool addCat(const char name[], const enum Gender gender, const enum Breed breed, const bool isfixed, const Weight weight, const enum Color collar1, const enum Color collar2,               const unsigned long long license ){

    bool flag = 0; //flag to check that all conditions passed remains 0 if all passed

    if (numOfCats >= MAX_CATS){ //if num of cats is greater than or equal to Max cats, flag
        flag = 1;
        return flag;
    }

    else if (strlen(name) == 0){  //if catname is empty, flag
        flag = 1;
        return flag;
    }


    else if (strlen(name) >= MAX_NAME){ //if cat name is longer than max name, flag
        flag = 1;
        return flag;
    }

    for (int i = 0; i < numOfCats; i++){   //check that cat name is unique
        if ((strcmp(dataBase[i].name, name)) == 0){
            flag = 1;
            return flag;
            break;
        }
    }


    if ( weight <=0 ) { //weight needs to be positive nonzero value
        flag = 1;
        return flag;
    }*/


    /*if all validation checks passed, fill database*/
   /* if (flag == 0){
        strcpy(dataBase[numOfCats].name,name);
        dataBase[numOfCats].gender = gender;
        dataBase[numOfCats].breed = breed;
        dataBase[numOfCats].isFixed = isfixed;
        dataBase[numOfCats].weight = weight;
        dataBase[numOfCats].collarColor1 = collar1;
        dataBase[numOfCats].collarColor2 = collar2;
        dataBase[numOfCats].license = license;
        numOfCats++;
        return numOfCats;
    }*/

        /*if any validation check fails print error*/
   /* else{
        fprintf(stderr, "%s: Cannot add cat: %d to database\n", PROGRAM_NAME, numOfCats);
    }

    return 0;
}*/