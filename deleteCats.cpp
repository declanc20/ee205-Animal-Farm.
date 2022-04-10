///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<cassert>

#include"reportCats.h"
#include "config.h"
#include"catDataBase.h"
#include"deleteCats.h"

using namespace std;

bool deleteCat(Cat* catName){
    assert(validateDatabase()); //call validate database first

    //if the cat was the head pointer (last cat added)
    if (catName == catDatabaseHeadPointer) {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next; //set the head pointer to the nextpointer
        delete catName;
        numOfCats--;

        assert(validateDatabase());
        return true;
    }

    //if not deleting the last enetered cat, need to start at thee head, traverse the list and find the
    //cat to be deleted
    Cat* pCat = catDatabaseHeadPointer;
    while (pCat != nullptr){

        if(pCat -> next == catName){
            pCat -> next = catName -> next; //rearrange the next pointer to make up for the to be deleted cat
            delete catName; //delete the cat
            numOfCats--; //subtract one form the number of cats in the list after deletion

            assert(validateDatabase());

            return true;
        }

        pCat = pCat-> next; //contniue to traverse the loop if cat to be dleted not found
    }


    assert(validateDatabase());

    throw ("tried to delete a cat that is not in the database");

}



bool deleteAllCats(){
    assert(validateDatabase()); //call validate database first

    //while headpointer is not null, delet cats
    while (catDatabaseHeadPointer != nullptr){
        deleteCat(catDatabaseHeadPointer);
    }



    numOfCats = 0;

    return true;

}



