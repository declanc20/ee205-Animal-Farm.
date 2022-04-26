///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "config.h"
#include "Animal.h"

using namespace  std;
const std::string Animal::KINGDOM_NAME = "Animalia";



//minimal consturctor to populate classification and species, inherits from node and weight
Animal::Animal( const Weight::t_weight newMaxWeight
        ,const std::string&     newClassification
        ,const std::string&     newSpecies): Node(), weight(Weight::POUND, newMaxWeight)
{
    species = newSpecies;
    classification = newClassification;
    Animal::validate();
}

//populate all member varaibles
Animal::Animal( const Gender           newGender
        ,const Weight::t_weight newWeight
        ,const Weight::t_weight newMaxWeight
        ,const std::string&     newClassification
        ,const std::string&     newSpecies): Node(), weight(newWeight, newMaxWeight)
{
    species = newSpecies;
    classification = newClassification;
    setGender(newGender);
    Animal::validate();
}

std::string Animal::getKingdom() const noexcept {        ///< Get the kingdom, which is `Animalia`
    return KINGDOM_NAME;
}

    std::string Animal::getClassification() const noexcept {  ///< Get the classification
    return classification;
    }

    std::string Animal::getSpecies() const noexcept {         ///< Get the species
    return species;
    }

    Gender Animal::getGender() const noexcept{  ///< Get the Animal's Gender
    return gender;
    }

    Weight::t_weight Animal::getWeight() const noexcept {         ///< Get the Animal's Weight
    return weight.getWeight();
    }

    void Animal::setWeight( const Weight::t_weight newWeight ) {  ///< Set the Animal's Weight
        weight.setWeight(newWeight);
    }

    void Animal::setGender( const Gender newGender){
    validate();
    gender= newGender;
    validate();
    }

 bool Animal::validateClassification( const std::string& checkClassification ) noexcept {  ///< Verify the biological classification is valid
    //check to make sure classification is not empty
    if(checkClassification.empty() == true){
        return false;// if classification entered was empty string return false
    }

    return true;
}

  bool Animal::validateSpecies( const std::string& checkSpecies ) noexcept{
      if(checkSpecies.empty() == true){
          return false;// if species entered was empty string return false
      }

      return true;

}

void Animal::dump() const noexcept {

    PRINT_HEADING_FOR_DUMP;

    Node::dump(); //prints the addresses of the containers in memory

        FORMAT_LINE_FOR_DUMP( "Animal", "this" ) << this << endl ;
        FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" ) << getKingdom() << endl ;
        FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) <<  getClassification() << endl ;
        FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << endl ;
        FORMAT_LINE_FOR_DUMP( "Weight", "gender" ) << getGender()<< endl ;
        FORMAT_LINE_FOR_DUMP( "Weight", "weight" ) << weight << endl ;

}

bool Animal::validate() const noexcept {
    //make sure all elemetns are healthy
    assert(Animal::validateSpecies(getSpecies()));
    assert(Animal::validateClassification(getClassification()));
    assert( weight.validate());
    assert(Node::validate());

    return true;

}