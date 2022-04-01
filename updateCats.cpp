///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include"catDataBase.h"
#include"config.h"
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include"updateCats.h"

/*bool updateCatName(int catNum, char newName[]){

    bool flag = 0;
    if (catNum < 0 || catNum >= MAX_CATS){
        flag = 1;
        fprintf(stderr, "%s: that cat does not exist\n", PROGRAM_NAME);
        return flag;
    }

    if (catNum > numOfCats){
        flag = 1;
        fprintf(stderr, "%s: that cat doesn't exist\n", PROGRAM_NAME);
        return flag;
    }

    if (strlen(newName) == 0){
        flag = 1;
        fprintf(stderr, "%s: you didnt enter a name\n", PROGRAM_NAME);
        return flag;
    }

    if (strlen(newName) >= MAX_NAME){
        fprintf(stderr,"%s name is too long\n", PROGRAM_NAME);
        flag =1;
        return flag;
    }

    for (int i = 0; i < numOfCats; i++){   //check that cat name is unique
        if ((strcmp(dataBase[i].name, newName)) == 0){
            flag = 1;
            fprintf(stderr,"%s: cat names must be unique!\n", PROGRAM_NAME);
            return flag;
            break;
        }
    }


    if (flag == 0){
        strcpy(dataBase[catNum].name,newName);
        return TRUE;
    }

    return 0;
}


void fixCat(int catNum){

    dataBase[catNum].isFixed = 1;

}


bool updateCatWeight(int catNum, Weight newWeight){

    if (newWeight <= 0 ){ //weight must be non negative and greater than zero.
        fprintf(stderr, "%s: invalid weight\n", PROGRAM_NAME);
        return FALSE;
    }

    else{
        dataBase[catNum].weight = newWeight;
        return TRUE;
    }

    return 0;
}

void updateCatCollar1(const int catNum, const enum Color newColor){

    dataBase[catNum].collarColor1 = newColor;
}

void updateCatCollar2(const int catNum, const enum Color newColor){

    dataBase[catNum].collarColor2 = newColor;
}

void updateLicense(const int catNum, const unsigned long long newLicense){

    dataBase[catNum].license = newLicense;
}*/

