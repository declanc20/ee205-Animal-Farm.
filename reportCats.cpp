///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include"Cat.h"
#include"catDataBase.h"
#include"reportCats.h"
#include<cstring>
#include"config.h"
#include"convertenum.h"



extern Cat* findCatByName(const char* name){

    //iterate through the database
    for(Cat* pCat = catDatabaseHeadPointer; pCat != nullptr; pCat = pCat->next){
        if(strcmp(pCat->getName(), name) == 0){ //if strings are equal have duplicate name
            return pCat; //returns the pointer to where the duplicate string occurs.
        }
    }

    return nullptr; //if no match foud return null
}

//bool printCat( int catNum){

    /*print bad cat for trying to find a cat outside of the range of database*/
   /* if (catNum < 0 || catNum > (MAX_CATS-1)){ //max_cats-1 because we start at cat 0 and go to 29 for indexes.
        fprintf(stderr, "%s: animalFarm0: Bad cat [%d]\n", PROGRAM_NAME, catNum);
        return FALSE;
    }

    else {
        printf("catindex=[%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] "
               "weight=[%f] collar1=[%s] collar2=[%s] license=[%llu] \n", catNum, dataBase[catNum].name,
               genderName(dataBase[catNum].gender), breedName(dataBase[catNum].breed),
               dataBase[catNum].isFixed, dataBase[catNum].weight,
               colorName(dataBase[catNum].collarColor1), colorName(dataBase[catNum].collarColor2),
               dataBase[catNum].license);
        return TRUE;
    }

    return 0;
}

void printAllCats(void){

    for (int i = 0; i < numOfCats; i++){

        printf("catindex=[%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] "
               "weight=[%f] collar1=[%s] collar2=[%s] license=[%llu] \n", i,
               dataBase[i].name, genderName(dataBase[i].gender),
               breedName(dataBase[i].breed),
               dataBase[i].isFixed, dataBase[i].weight,
               colorName(dataBase[i].collarColor1),
               colorName(dataBase[i].collarColor2), dataBase[i].license );
    }
}


bool findCat( char name[]){

    int flag = 1; //flag unless match found

    for (int i = 0; i < numOfCats; i++){ //iterate through database looking for match
        if  (strcmp(dataBase[i].name, name) == 0){
            flag = 0;
            return i;
            break;
        }
    }

    if (flag == 1){ //if after going through the databse no match print error
        fprintf(stderr, "%s: No cat with that name in the database :/ \n",
                PROGRAM_NAME);
        return FALSE;
    }

    return 0;
}*/
