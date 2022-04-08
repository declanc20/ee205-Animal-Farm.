///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern void fixCat(int catNum);
extern bool updateCatName(int catNum, char newName[]);
extern bool updateCatWeight(int catNum, Weight newWeight);
extern void updateLicense(const int catNum, const unsigned long long newLicense);
extern void updateCatCollar2(const int catNum, const enum Color newColor);
extern void updateCatCollar1(const int catNum, const enum Color newColor);
