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
#include"convertenum.h"
#include"reportCats.h"
#include"catDataBase.h"

#include<iostream>
#include<cassert>
#include<cstring>


bool printAllCats(){

    //validate the database before printing
    assert(validateDatabase());

    //print all cats
    for (Cat *pCat = catDatabaseHeadPointer; pCat != nullptr; pCat = pCat->next) {

            pCat -> print(); //print the current iterated cat

    }

    return true;

}

 Cat* findCatByName(const char* name) {

    for (Cat* pCat = catDatabaseHeadPointer; pCat != nullptr; pCat = pCat->next) {
        if(strcmp(name, pCat-> getName()) ==0 ) { //if names are the same then strcmp == 0
            return pCat;
        }
    //delete this DEBUG after
        (pCat-> print());
    }

    return nullptr; //if no matching name found return null

}



