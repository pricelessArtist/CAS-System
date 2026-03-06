#include <iostream>
#include "./utils/DoublyLinkedList.hpp"
using namespace std;

int main() {
    DoubleLinkedList list;

    list.insertNode('0');
    list.insertNodeBeforeHead('1');
    list.insertNodeAfter('2', '0');
    list.insertNodeAfter('3', '2');
    list.insertNodeAfter('4', '3');
    list.insertNodeAfter('5', '4');
    list.insertNodeAfter('6', '5');
    list.insertNodeBefore('a', '5');
    list.iterateForward();
    list.iterateBackwards();
    list.deleteNode('a');
    list.insertAtEnd('b');
    list.insertAtEnd('c');
    list.iterateForward();
    list.iterateBackwards();
    return 0;
}