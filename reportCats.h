///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include"Cat.h"

extern bool findCat( char name[]);
extern void printAllCats(void);
extern bool printCat( int catNum);

extern Cat* findCatByName(const char* name);

