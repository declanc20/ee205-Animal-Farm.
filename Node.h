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
    /// A generic comparison based on the memory address of the object.
    ///
    /// Functions (like sorting) may want to compare two nodes.
    /// This is a good default comparison.  Other functions may choose to
    /// implement their own, more interesting, comparison functions and they can
    /// override the `>` operator.
    ///
    /// This allows us to separate the algorithm from the data.
    /// We can code an algorithm to operate on a virtual Node > operator and
    /// allow the descendants of Node to override `>` and implement their own
    /// ordering.
    ///
    /// @return true if `node1 > node2`
    static bool compareByAddress ( const Node* node1, const Node* node2 );


public:  /////////////////////////// Public Methods ////////////////////////////
    /// Output the contents of this object
    ///
    /// #### Sample Output
    /// @code
    ///     ==============================================
    ///     Node    this                0x7ffeeaa7e580
    ///     Node    next                0
    /// @endcode
    ///
    virtual void dump() const;


    /// Check the Node.
    ///
    /// This method checks the Node.  If something is not right,
    /// print out a message and stop the validation.  It will not throw an
    /// exception.
    ///
    /// @return True if the Node is healthy
    virtual bool validate() const noexcept;


    /// Compare two nodes:  Is the left greater than the right?
    ///
    /// @param rightSide The `this` member is the left side of the `>` operator.
    ///                  `rightSide` is the right side of the `>` operator.
    /// @return `true` if `leftSide > rightSide`
    virtual bool operator>(const Node& rightSide);
}; // class Node
