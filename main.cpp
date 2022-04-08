///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

/*#include<stdio.h>
#include<string.h>
#include<stdbool.h>*/

#include"addCats.h"
#include"reportCats.h"
#include"updateCats.h"
#include"deleteCats.h"
#include"convertenum.h"

#include <cstdlib>  // For EXIT_SUCCESS / EXIT_FAILURE
#include <cassert>  // For assert()
#include <cstring>  // For strcmp()
#include <exception>  // For try/catch blocks
#include <iostream>

#include"config.h"
#include"Cat.h"
#define DEBUG

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_TITLE << endl ;

#ifdef DEBUG
    Cat myCat = Cat();
    /*test default sets to zero*/
    assert(myCat.getName() != nullptr );
    assert((strcmp(myCat.getName(), "")) == 0);
    assert(strlen(myCat.getName()) <= MAX_CAT_NAME);
    assert(myCat.getGender() == UNKNOWN_GENDER );
    assert(myCat.getBreed() == UNKNOWN_BREED);
    assert(myCat.getIsCatFixed() == false);
    assert(myCat.getWeight() == UNKNOWN_WEIGHT);
    //assert(!myCat.validate());
    //myCat.setName(nullptr);


#endif
    cout << "Hello?? " << PROGRAM_TITLE << endl;

    return 0;

}
