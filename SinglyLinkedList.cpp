///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include "config.h"
#include "SinglyLinkedList.h"


SinglyLinkedList::SinglyLinkedList() {        ///< Make a new SinglyLinkedList
    assert(SinglyLinkedList::validate()); //validate list is healthy
}

void  SinglyLinkedList::push_front( Node* newNode ) {

    newNode -> next = head;
    head = newNode;
    count++;

    assert(validate());

}  ///< Insert `newNode` to the beginning of the List

Node* SinglyLinkedList::pop_front() noexcept { ///< Remove and return the first Node in the List

    Node* poppedElement = head;

    //if list is empty, return head and nothing to pop
    if (head == nullptr){
        return head;
    }

    head = head->next; // set the head pointer to the node after the current head pointer


    count--;


   return poppedElement;

}

void SinglyLinkedList::insert_after( Node* currentNode, Node* newNode ) {   ///< Insert `newNode` after `currentNode`

    assert(validate());
    newNode-> next = currentNode -> next; //set the pointer that should come after the newNode = to what
                                          // is currently after the current node
   currentNode -> next = newNode; //set the newNode to be after the current node

   count++;
   assert(validate());

}

void SinglyLinkedList::dump() const noexcept {

    Node* currentNode = head;

    for(unsigned int i = 0; i != count; i++){ //increment through the list
        currentNode ->dump();
        currentNode = currentNode -> next;
    }

}     ///< Output the contents of this container



bool SinglyLinkedList::validate() const noexcept {

    //check to make sure list elements are correct if only one element in the list
    if (head ->next == nullptr){
        assert(count=1); // should only be one element in the list in this case.
    }


    //ensure that number of elements in the list is correct
    unsigned int checkCount;
    Node* checkNode = head;
    while (checkNode != nullptr){ //checl all nodes until end of list
        checkNode = checkNode->next; //increment up the node ot be checked
        checkCount++;
    }

    //after going through the nodes in the list we should match the size of the list
    assert(size() == checkCount);


} ///< Check to see if the container is valid