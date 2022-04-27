///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>
#include <ostream>




class Weight {

public: //Enumerators
    enum UnitOfWeight {POUND, KILO, SLUG };

    typedef float t_weight;

    void setWeight(t_weight newWeight);

    void setWeight(t_weight newWeight, UnitOfWeight weightUnits);


private: //Weight and its unit variable declarations
    t_weight weight = UNKNOWN_WEIGHT;
    t_weight maxWeight = UNKNOWN_WEIGHT;
    enum UnitOfWeight unit = POUND;
    bool bIsKnown = false;
    bool bHasMax=false;


private: //private getters and setters
    void setMaxWeight(t_weight newMaxWeight);

public://public getters and setters
    t_weight getWeight() const;
    t_weight getWeight(UnitOfWeight weightUnits) const noexcept;
    t_weight getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;

public://constructors
    Weight() noexcept;
    Weight(t_weight newWeight);
    Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight);
    Weight(t_weight newWeight, t_weight newMaxWeight);
    Weight(UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);




public: //conversion constants and labels
    static const t_weight UNKNOWN_WEIGHT;
    static const t_weight KILOS_IN_A_POUND;
    static const t_weight SLUGS_IN_A_POUND ;
    static const std::string POUND_LABEL ;
    static const std::string KILO_LABEL ;
    static const std::string SLUG_LABEL ;

public: //weight conversions

    static t_weight fromKilogramToPound(t_weight kilogram) noexcept;
    static t_weight fromPoundToKilogram(t_weight poun) noexcept;
    static t_weight fromSlugToPound(t_weight slug) noexcept;
    static t_weight fromPoundToSlug(t_weight pound) noexcept;
    static t_weight convertWeight(t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;

public://validation functions
    bool isWeightValid(t_weight checkWeight) const noexcept;
    bool validate() const noexcept;

    bool operator<(const Weight &rhs_Weight) const;

    bool operator==(const Weight &rhs_Weight) const;

    Weight &operator+=(t_weight rhs_addToWeight );

public: //print function
    void dump() const noexcept;

};


std::ostream& operator<<( std::ostream& lhs_stream, const Weight& rhs_Weight ) ;

std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight );
