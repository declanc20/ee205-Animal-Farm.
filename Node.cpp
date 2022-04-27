///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include"Node.h"
#include "config.h"

using namespace std;

    bool Node::compareByAddress ( const Node* node1, const Node* node2 ) {
        if( node1 > node2 ) {
            return true;
        }
        return false;
    }


    void Node::dump() const {
        FORMAT_LINE_FOR_DUMP("Node", "this") << this << std::endl;
        FORMAT_LINE_FOR_DUMP("Node", "next") << next << std::endl;
    }


    bool Node::validate() const noexcept {
        if( next == nullptr ) {
            return true;  /// `nullptr` is a valid value for the next pointer.
        }

        /// @internal Perform a rudimentary recursive loop test and ensure
        ///           the next pointer does not refer back to itself.
        ///           This also has the benefit of dereferencing the
        ///           next pointer and ensuring it points to a valid address.
        if( next == next->next ) {
            std::cout << PROGRAM_NAME << ": Recursive loop detected:  next points to itself!" ;
            return false;
        }

        return true;
    }


    /// Compare two nodes:  Is the left greater than the right?
    ///
    /// @param rightSide The `this` member is the left side of the `>` operator.
    ///                  `rightSide` is the right side of the `>` operator.
    /// @return `true` if `leftSide > rightSide`
  bool Node::operator>(const Node& rightSide) {
        // `this` is the leftSide of the operator, so compare:
        // leftSide > rightSide

        return compareByAddress( this, &(Node&)rightSide );
    }



