#include <iostream>

#include "stlarray.h"
#include "linkedlist.h"
#include "stlstack.h"
#include "stlvector.h"
#include "backspace.h"



int main(int, char* [])
{
    std::string invoer;
    std::cin >> invoer;

    std::cout << "Array Stack:        ";
    backspace<Array<char> >(invoer);
    std::cout << "Linked List Stack:  ";
    backspace<LinkedList<char> >(invoer);
    std::cout << "STL Vector Stack:   ";
    backspace<StlVector<char> >(invoer);
    std::cout << "STL Stack Stack:    ";
    backspace<StlStack<char> >(invoer);

    return 0;
} // main
