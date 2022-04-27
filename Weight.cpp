///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Weight.h"
#include "config.h"

using namespace std;

//set the weight to an impossible value
const Weight::t_weight Weight::KILOS_IN_A_POUND = 0.453592 ;
const Weight::t_weight Weight::SLUGS_IN_A_POUND = 0.031081 ;
const string Weight::POUND_LABEL = "POUND";
const string Weight::KILO_LABEL = "KILO" ;
const string Weight::SLUG_LABEL = "SLUG";
//define weight constant conversions
const Weight::t_weight Weight::UNKNOWN_WEIGHT = -1;


ostream& operator<<( ostream& lhs_stream,const Weight::UnitOfWeight rhs_UnitOfWeight ) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND: return lhs_stream << Weight::POUND_LABEL ;
        case Weight::KILO: return lhs_stream << Weight::KILO_LABEL ;
        case Weight::SLUG: return lhs_stream << Weight::SLUG_LABEL ;
        default:
            throw out_of_range( "The unit can’t be mapped to a string" );
    }
}

// consturctors
//initial constructor sets weight to UNKNOWN and unit of weight ot pounds
Weight::Weight() noexcept{
assert(validate());

}

Weight::Weight(Weight::t_weight newWeight){
   setWeight(newWeight);
    assert(validate());
}

Weight::Weight(Weight::UnitOfWeight newUnitOfWeight) noexcept{
    unit = newUnitOfWeight;
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight, Weight::UnitOfWeight newUnitOfWeight){
    isWeightValid(newWeight);
    unit=newUnitOfWeight;
    setWeight(newWeight,newUnitOfWeight);
    assert(validate());
}

Weight::Weight(Weight::t_weight newWeight, Weight::t_weight newMaxWeight){
    setMaxWeight(newMaxWeight);
    isWeightValid(newWeight);
    setWeight(newWeight);
    assert(validate());
}
Weight::Weight(UnitOfWeight newUnitOfWeight, t_weight newMaxWeight){
    unit = newUnitOfWeight;
    setMaxWeight(newMaxWeight);
    assert(validate());
}

Weight::Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight){
    setWeight(newWeight);
    setMaxWeight(newMaxWeight);
    newUnitOfWeight = newUnitOfWeight;
    assert(validate());
}



bool Weight::operator<(const Weight &rhs_Weight) const {
    t_weight lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    t_weight rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;
    return lhs_weight < rhs_weight;
}

bool Weight::operator==( const Weight& rhs_Weight ) const {
    t_weight lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    t_weight rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;
    return lhs_weight == rhs_weight;
}

Weight& Weight::operator+=(t_weight rhs_addToWeight ) {
    setWeight(weight+rhs_addToWeight);
    return *this;

}


//getters and setters
void Weight::setMaxWeight(t_weight newMaxWeight) {
    Weight::maxWeight = newMaxWeight;
    bHasMax = true;
}

Weight::t_weight Weight::getWeight() const {
    return weight;
}

Weight::t_weight Weight::getWeight(Weight::UnitOfWeight weightUnits) const noexcept{
    return convertWeight(Weight::weight, Weight::unit, weightUnits );
}

void Weight::setWeight(t_weight newWeight) {
    isWeightValid(newWeight);
    Weight::weight = newWeight;
    bIsKnown= true;
}

Weight::t_weight Weight::getMaxWeight() const noexcept{
    return maxWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept{
    return unit;
}

void Weight::setWeight(Weight::t_weight newWeight, Weight::UnitOfWeight weightUnits){
   Weight::t_weight convertedWeight;
   convertedWeight= Weight::convertWeight(newWeight,weightUnits,unit);
    setWeight(convertedWeight);
}

bool Weight::hasMaxWeight() const noexcept {

    return Weight::bHasMax;
}

bool Weight::isWeightKnown() const noexcept {
    return Weight::bIsKnown;
}


//weight conversion functions
Weight::t_weight Weight::fromKilogramToPound(t_weight kilogram) noexcept{
    return kilogram/KILOS_IN_A_POUND;
}
Weight::t_weight Weight::fromPoundToKilogram(t_weight pound) noexcept{
    return pound*KILOS_IN_A_POUND;
}
Weight::t_weight Weight::fromSlugToPound(t_weight slug) noexcept {
    return slug / SLUGS_IN_A_POUND;
}
Weight::t_weight Weight::fromPoundToSlug(t_weight pound) noexcept{
    return pound * SLUGS_IN_A_POUND;
}
Weight::t_weight Weight::convertWeight(t_weight fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept{

    //always convert to pounds (a common unit)
    t_weight weightInPounds;
    switch(fromUnit){
        case (POUND): weightInPounds = fromWeight; break;
        case (KILO): weightInPounds = fromKilogramToPound(fromWeight); break;
        case(SLUG): weightInPounds = fromSlugToPound(fromWeight); break;
    }

    //now convert to whatever unit is needed from pounds
    switch(toUnit){
        case (POUND): return weightInPounds;
        case (KILO): return fromPoundToKilogram(weightInPounds);
        case(SLUG): return fromPoundToSlug(weightInPounds);
    }
    return weightInPounds;
}

bool Weight::isWeightValid(t_weight checkWeight) const noexcept {
   if (checkWeight <=0 ){
       return false; //weight must be grater than 0.
   }

   if (bHasMax == true){
       if (checkWeight > maxWeight){
           return false;
       }
   }
    return true;
}

bool Weight::validate() const noexcept {

    if (bHasMax == true){
        if(isWeightValid(maxWeight) == false){ //make sure maxweight is valid
            return false;
        }
    }

    if (bIsKnown){
        if (isWeightValid(weight) == false){
            return false; //make sure weight of animal is valid
        }

        if (bHasMax){
            if(weight > maxWeight){
                return false;
            }
        }
    }

    return true;
}

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
void Weight::dump() const noexcept{
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Weight", "this" ) << &weight << endl ;
    FORMAT_LINE( "Weight", "isKnown" ) << bIsKnown << endl ;
    FORMAT_LINE( "Weight", "weight" ) <<  weight << endl ;
    FORMAT_LINE( "Weight", "unitOfWeight" ) << unit << endl ;
    FORMAT_LINE( "Weight", "hasMax" ) << bHasMax<< endl ;
    FORMAT_LINE( "Weight", "maxWeight" ) << maxWeight << endl ;
}


