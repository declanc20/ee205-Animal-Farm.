///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <cassert>
#include "config.h"
#include "Mammal.h"

using namespace std;

 const string Mammal::MAMMAL_NAME = "Mammilian";

    void Mammal::dump() const noexcept {
    Animal::dump();

    FORMAT_LINE_FOR_DUMP("Mammal","Color") << color << endl;

}



