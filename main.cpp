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
#include"gender.h"
#include"Color.h"

#include <cstdlib>  // For EXIT_SUCCESS / EXIT_FAILURE
#include <cassert>  // For assert()
#include <cstring>  // For strcmp()
#include <exception>  // For try/catch blocks
#include <iostream>

#include"config.h"
#include"Cat.h"

using namespace std;

int main(){

    cout << "Starting " << PROGRAM_NAME << endl ;

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
    try {
        myCat.setName(nullptr);
        assert(false); // We should never get here
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    try { /////It is this one that is breaking it for some reason i think
        myCat.setName("");
        assert(false); // We should never get here
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    try { //should succeed
        myCat.setName("1");
        //cout<<myCat.getName()<<endl;
    } catch (const char* txt) {
        cout<<txt<<endl;
        cout<<"from should be valid" << endl;
    }

    myCat.setName("Ewjfhkjwefbkejhjewhfjwbkjewbfiwqehfklbnwelfkhweok");

    try { //should succeed
        myCat.setName("Ewjfhkjwefbkejhjewhfjwbkjewbfiwqehfklbnwelfkhweokuy");
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    myCat.setGender(FEMALE);

    try { //should succeed
        myCat.setGender(MALE);
        assert(false);
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    myCat.setBreed(MANX);

    try { //should succeed
        myCat.setBreed(MAINE_COON);
        assert(false);
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    cout<<"Is cat fixed " << myCat.getIsCatFixed()<<endl;
    myCat.setCatToFixed();
    cout<< "Is cat fixed " <<myCat.getIsCatFixed()<<endl;

    try {
        myCat.setWeight(0);
        assert(false);
    } catch (const char* txt) {
        cout<<txt<<endl;
    }

    myCat.setWeight((1.0 / 1024));

    assert(myCat.validate()); //cat should now be valid
    myCat.print();

#endif

    // add the 6 cats
    assert(addCat(new Cat("Loki", Gender::MALE, PERSIAN, 1.0)));
    assert(addCat(new Cat("Milo", Gender::MALE, MANX, 1.1)));
    assert(addCat(new Cat("Bella", Gender::FEMALE, MAINE_COON, 1.2)));
    assert(addCat(new Cat("Kali", Gender::FEMALE, SHORTHAIR, 1.3)));
    assert(addCat(new Cat("Trin", Gender::FEMALE, MANX, 1.4)));
    assert(addCat(new Cat("Chili", Gender::MALE, SHORTHAIR, 1.5)));

    //release main functions
    printAllCats();

    #ifdef DEBUG
    cout<<"\n \n lets find Bella \n \n"<<endl;
    (findCatByName("Bella")) -> print();

    cout<<"\n \n Is there a Belinda here?\n \n"<<endl;
    //find cat that doesn't exist
    findCatByName("Belinda");


    cout<<"\n \n rip bella \n \n"<<endl;
    deleteCat(findCatByName("Bella"));
    cout<<"\n \n make sure she's out of the system by trying to search for her... \n \n"<<endl;
    findCatByName("Bella");
    cout<<"\n \n that Cat is no longer with us :( \n \n"<<endl;

    try{
    deleteCat(findCatByName("Bella"));
    } catch (const char* txt) {
        cout<<txt<<endl;
    }
    #endif



    deleteAllCats();
    printAllCats();


    cout << "Done With " << PROGRAM_NAME << endl;

    return 0;

}
