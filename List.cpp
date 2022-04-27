///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include"config.h"
#include <cassert>

    Node* List::get_next( const Node* currentNode ) { ///< Get the next Node in the List
        return currentNode -> next;
    }


    bool List::empty() const noexcept {
        if (head == nullptr){
            return true; //if head points to null then list is empty
        }
        else{
            return false;
        }
    }         ///< `true` if the List is empty

    unsigned int List::size() const noexcept{
        return count; //return the number of objects in the list
    }

    bool List::isIn( Node* aNode ) const { ///< `true` if `aNode` is in the List

        Node* checkNode = head; // start at the head of the list

        //loop that runs through the list
        for (unsigned int i; i != count; i++){
            if (checkNode == aNode){
                return true;
            }
                checkNode = checkNode-> next; //if the checkNode was not what we're looking for point to next node

        }

        return false; //if the above loop did not return true, then node is not in the list

    }



    bool List::isSorted() const noexcept { ///< `true` if the List is sorted
        Node* checkNode = head;
        for (unsigned int i; i != count; i++){
        if ( *checkNode > *checknode->next){
            return false; //next node is greater than this node so list is not in order.
        }

        return true;
    }

    }

    Node* List::get_first() const noexcept { ///< Get the first Node in the List
        return head; //head is the first thing in the list
    }

    void List::deleteAllNodes() noexcept { ///< Delete all of the nodes in the List
        void List::deleteAllNodes() noexcept {
            assert( validate() );
            while( head != nullptr ) {
                pop_front();
            }
            assert( validate() );
        }
    }
    ////////////////////////// Abstract Methods ///////////////////////////
    virtual List::Node* pop_front() noexcept = 0 ;     ///< Remove and return the first Node in the List
    virtual void List::dump() const noexcept = 0;      ///< Output the contents of this container
    virtual bool List::validate() const noexcept = 0;  ///< Check to see if the container is valid
