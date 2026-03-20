#ifndef ABACUS_HPP
#define ABACUS_HPP

#include "../DoublyLinkedList.hpp"

/*
* The Abacus is an hand operating calculating tool that handles many calculations depending on the base numbering system
*/

struct Result {
    // current digit 
    Node* digit;

    // carry digit
    Node* carry;

    //checks if we have a carry, we return the carry digit
    bool isCarry;
};

class Abacus {
    private:
    // leftPointer for leftLinked list 
    Node* leftPointer = nullptr;
    // rightPointer for rightLinked list
    Node* rightPointer = nullptr;
    public:  
        // adding two numbers from the 
        Result Addition(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2);  

        //future implementation
        //Result Subtraction(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2);
        //Result Division(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2);
        //Result Multiplication(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2);
};


#endif //ABACUS_HPP