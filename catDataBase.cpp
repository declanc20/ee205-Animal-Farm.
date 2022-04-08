///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDataBase.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include "catDataBase.h"
#include"reportCats.h"

using namespace std;
    //set head pointer to null for empty list
    Cat* catDatabaseHeadPointer = nullptr;

    //set numof cats in database to zero
    int numOfCats = 0;

    bool validateDatabase() {

        int numOfValidCats = 0;

        //iterate over every cat and see if its the cat looking for.
        for (Cat *pCat = catDatabaseHeadPointer; pCat != nullptr; pCat = pCat->next) {
            if (!pCat->validate()) { //if the cat is not valid, return database is not valid.
                return false;
            }

            if (findCatByName( pCat->getName()) == nullptr){
            cout<< "duplicate name was found" <<endl;
            return false;
            }


            numOfValidCats++; //increment up the number of valid cats  if no problems
        }



        if(numOfCats != numOfValidCats){ //after iterating through all cats make sure valid cats equals num of cats in the data base
            cout<< "Database is invalid" << endl;
            return false;
        }

        return true;

    }


