///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"

bool addCat(const char name[], const enum Gender gender,
            const enum Breed breed, const bool isfixed, const Weight weight,
            const enum Color collar1, const enum Color collar2,
            const unsigned long long license );