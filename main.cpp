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

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_TITLE << endl ;

    Cat testCat = Cat();
    assert(testCat.getName() == nullptr );



    cout << "Hello??? " << PROGRAM_TITLE << endl;



    return 0;

}
