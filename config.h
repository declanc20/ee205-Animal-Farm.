///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define PROGRAM_TITLE "Animal Farm 2"

enum Gender{ UNKNOWN_GENDER, MALE, FEMALE };
enum Breed{ UNKOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

typedef float Weight;
const Weight UNKNOWN_WEIGHT = -1; //unknwn weight is a non possible weight