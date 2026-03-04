#include <iostream>
#include "DoublyLinkedList.hpp"

Node DoubleLinkedList::insertNode(char nodeValue) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->elements = nodeValue;
    
    //we set the nodeValue to newNode.elements, then we set it to firstNode
    if (firstNode == NULL) {
        newNode->previousNode = nullptr;
        newNode->nextNode = nullptr;
        firstNode = newNode;
    }

    newNode->nextNode = this->firstNode;
    this->firstNode = newNode;
    
    Node currentNode = *newNode;
    std::cout << "First Node: " << firstNode->elements << std::endl;
    std::cout << "CurrentNode: " << currentNode.elements << std::endl;
    std::cout << "CurrentNode Next Node: " << currentNode.nextNode->elements << std::endl;
    std::cout << "CurrentNode Previous Node: " << currentNode.previousNode << std::endl;
    return currentNode;
}