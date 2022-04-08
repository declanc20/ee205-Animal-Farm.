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
#include<stdbool.h>
#include"assert.h"
#include"catDataBase.h"
#include"addCats.h"
#include"reportCats.h"
#include"updateCats.h"
#include"deleteCats.h"
#include"convertenum.h"*/

#include<iostream>
#include"config.h"

using namespace std;

int main(){

/*
    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;

    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;

    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;

    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;

    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;

    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

#ifdef DEBUG*/
    /*fails because too long of a name*/
   /*assert(addCat( "fkjebfkjbekfjbwekjbkjbkjebkjwebkjwbekjbwekjfbkejwbfkjbfk"
            "jeleflebwekfkewfkwpefhpoefpojwefojd;lw;dljqw;ldj;slmd;wpq ",
            UNKNOWN_GENDER, SHORTHAIR, false, 19.0, BLACK, PINK, 107 )
            == FALSE) ;*/
   /*invalid index failure*/
   //assert(printCat(8000) );
   /*fails because no cat with that name*/
   //assert(findCat("Nonexistent"));
   /*falis because no cat with that name*/
   //assert(updateCatName(23, "Fake") ==FALSE);
   /*fails because string length is 0*/
   //assert(updateCatName(1, "") == FALSE);
   /*fails because cant update a cat with name more than 50 chars*/
   //assert(updateCatName(1," eefiheofhowehfoihfowehlfwelkhlkwehlkwelknweld"
                  //   "kjflwekjflkewflkewflkjwlekfjlwkejfljwefe;wejf") == FALSE);
   /*fails because no cat with that name to update*/
  // assert(updateCatName(3, "Chili") == FALSE);
   /*fails to update with a negative weight*/
  /* assert(updateCatWeight(0, -10.0) == FALSE);
#endif


    printAllCats();

    int kali = findCat( "Kali" ) ;

#ifdef DEBUG
    printf("the value of kali is: %d\n", kali);//debug
   assert(updateCatName( kali, "Chili" ) == FALSE) ; // this should fail
   printCat( kali );
#endif

    assert(updateCatName( kali , "Capulet" ) == TRUE);
    assert(updateCatWeight( kali, 9.9 ) == TRUE);
    fixCat( kali );
    assert(printCat( kali ) == TRUE);*/

    /*test updating the cats new fields*/
    /* assert(printCat(1) == TRUE);
    printf("updating cat 1...\n");
    updateCatCollar1(1, BLUE);
    updateCatCollar2(1, GREEN);
    updateLicense(1, 50);
    printCat(1);

    printAllCats();

    deleteAllCats();
    printAllCats();*/

    cout << "Starting " << PROGRAM_TITLE << endl ;

    cout << "Done with " << PROGRAM_TITLE << endl;



    return 0;

}
