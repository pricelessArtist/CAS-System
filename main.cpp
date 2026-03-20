#include <iostream>
#include "./utils/DoublyLinkedList.hpp"
#include "./utils/Algorithms/Abacus.hpp"
using namespace std;

int main() {
    DoubleLinkedList list;
    DoubleLinkedList list2;
    Abacus abacus;
    
    list.insertNode('0');
    list.insertNodeAfter('1', '0');
    list.insertNodeAfter('2', '1');
    list.insertNodeAfter('3', '2');
    list.insertNodeAfter('4', '3');
    list.insertNodeAfter('5', '4');
    list.insertNodeAfter('6', '5');
    list.insertNodeAfter('7', '6');
    list.insertNodeAfter('8', '7');
    list.insertNodeAfter('9', '8');
    list.iterateForward();

    list2.insertNode('0');
    list2.insertNodeAfter('1', '0');
    list2.insertNodeAfter('2', '1');
    list2.insertNodeAfter('3', '2');
    list2.insertNodeAfter('4', '3');
    list2.insertNodeAfter('5', '4');
    list2.insertNodeAfter('6', '5');
    list2.insertNodeAfter('7', '6');
    list2.insertNodeAfter('8', '7');
    list2.insertNodeAfter('9', '8');
    list2.iterateForward();

    abacus.Addition(list, list2, '5', '7');
    return 0;
}