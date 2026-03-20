#include <iostream>
#include "Abacus.hpp"
using namespace std;

Result Abacus::Addition(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2) {
    Result result;
    Node* list1CurrentNode = nullptr;
    Node* list2CurrentNode = nullptr;

    //we need to check if one char is less than the other
    // if number1 is less than number2, the leftPointer is decreasing, rightPointer is increasing.
    if (number1 < number2) {
        cout << "Number " << number1 << " is less than number " << number2 << endl; 
        //list1 goes backwards 
        //while list2 goes forward
        list1CurrentNode = list1.lastNode;
        list2CurrentNode = list2.firstNode;
        
        //assigns left and right pointer
        while (list1CurrentNode != nullptr && list2CurrentNode != nullptr) {
            if (list1CurrentNode->element == number1) {
                leftPointer = list1CurrentNode;
            } 
            list1CurrentNode = list1CurrentNode->previousNode;
            
            if (list2CurrentNode->element == number2) {
                rightPointer = list2CurrentNode;
            }
            list2CurrentNode = list2CurrentNode->nextNode;
        }
        
        //loops backwards for left pointer
        while (leftPointer != list1.firstNode) {
            cout << "leftPointer elements: " << leftPointer->element << endl;
            cout << "rightPointer elements: " << rightPointer->element << endl;
            
            
            //we need to check for a carry on the rightPointer
            if (rightPointer == list2.lastNode) {
                rightPointer = list2.firstNode;
                result.isCarry = true;
            }
            rightPointer = rightPointer->nextNode;
            leftPointer = leftPointer->previousNode;
        }
        
        result.digit = rightPointer;
        
        if (result.isCarry == true) {
            result.carry = rightPointer->previousNode;
            cout << "Left pointer: " << leftPointer->element << endl;
            cout << "Right pointer: " << rightPointer->previousNode->element << endl; 
            cout << "Result digit: " << result.digit->previousNode->element << endl;
            cout << "result has a carry: " << result.carry->previousNode->element << endl;
        } else {
            cout << "Left pointer: " << leftPointer->element << endl;
            cout << "Right pointer: " << rightPointer->element << endl; 
            cout << "Result digit: " << result.digit->element << endl;
            cout << "No carry" << endl;
        }
        
        return result;
    } else {
        // else number2 is less than number1, the rightPointer is decreasing, leftPointer is increasing. 
        cout << "Number " << number2 << " is less than number " << number1 << endl;  
        
        list1CurrentNode = list1.firstNode;
        list2CurrentNode = list2.lastNode;

        while (list1CurrentNode != nullptr && list2CurrentNode != nullptr) {
            if (list1CurrentNode->element == number1) {
                leftPointer = list1CurrentNode;
            }
            list1CurrentNode = list1CurrentNode->nextNode;
        
            if (list2CurrentNode->element == number2) {
                rightPointer = list2CurrentNode;
            }
            list2CurrentNode = list2CurrentNode->previousNode;
        }

        //loops backwards for right pointer
        while (rightPointer != list2.firstNode) {
            cout << "leftPointer elements: " << leftPointer->element << endl;
            cout << "rightPointer elements: " << rightPointer->element << endl;

            //we need to check for a carry on the left pointer
            if (leftPointer == list1.lastNode) {
                leftPointer = list1.firstNode;
                result.isCarry = true;
            } 
            leftPointer = leftPointer->nextNode;
            rightPointer = rightPointer->previousNode;
        }

        result.digit = leftPointer;

        if (result.isCarry == true) {
            result.carry = leftPointer->previousNode;
            cout << "Left pointer: " << leftPointer->previousNode->element << endl;
            cout << "Right pointer: " << rightPointer->element << endl; 
            cout << "Result digit: " << result.digit->previousNode->element << endl;
            cout << "result has a carry: " << result.carry->previousNode->element << endl;
        } else {
            cout << "Left pointer: " << leftPointer->element << endl;
            cout << "Right pointer: " << rightPointer->element << endl; 
            cout << "Result digit: " << result.digit->element << endl;
            cout << "No carry" << endl;
        }
        
        return result;
    }
}