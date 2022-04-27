///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdexcept>
#include <iostream>
#include <cassert>
#include "Cat.h"

using namespace std;



    const std::string Cat::SPECIES_NAME = "Felis Catus" ;  ///< The scientific name for this species
    const Weight::t_weight Cat::MAX_WEIGHT = 40;    ///< The maximum weight for this species



    std::string Cat::getName() const noexcept {
        return name;
    }///< Get the Cat's name

    void Cat::setName( const std::string& newName ){
        if (Cat::validateName(newName) == false) {
        throw invalid_argument(PROGRAM_NAME "Cat name can't be empty");
        }

        name = newName;
    } //set cat name



    bool Cat::isFixed() const noexcept{
        return isCatFixed;

    }///< Return `true` if the cat is fixed/neutered

    void Cat::fixCat() noexcept {             ///< Spay or neuter the cat
        isCatFixed = true;
    }

    std::string Cat::speak() const noexcept {
        return "Meow";

    }///< Say `Meow`.

    void Cat::dump() const noexcept{
        Mammal::dump();// print parent

        FORMAT_LINE_FOR_DUMP("Cat", "name") << getName() <<endl;
        FORMAT_LINE_FOR_DUMP("Cat", "isFixed") << isFixed() << endl;
        }///< Print the contents of this object (and its parents)
    bool Cat::validate() const noexcept {
        Mammal::validate();
        assert(validateName(getName()));
        return true;
        }///< Check to see if the Cat object is valid

    // Static methods are `const` by default
    bool Cat::validateName( const std::string& newName ) {
        if (newName.empty() == true) {
            return false;
        }///< Check if `newName` is valid
        return true;
    }
};





