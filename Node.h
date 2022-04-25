///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>   // For cout

#include "config.h"

class Node {
    friend class List;
    friend class SinglyLinkedList;

protected:  ////////////////////// Protected Members ///////////////////////////
    Node* next = nullptr;  ///< Point to the next Node in the list or `nullptr`
    ///< if it's the last Node in the list.

protected:  //////////////////////// Static Methods ////////////////////////////
    static bool compareByAddress;


public:  /////////////////////////// Public Methods ////////////////////////////
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node& rightSide);

}; // class Node
