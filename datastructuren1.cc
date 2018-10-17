#include <iostream>

#include "stlarray.h"
#include "linkedlist.h"
#include "stlstack.h"
#include "stlvector.h"
#include "backspace.h"



int main(int, char* []) {
    std::string invoer;
    std::cin >> invoer;
    std::cout << invoer << std::endl;


    std::cout << "Array Stack:        ";
    backspace<arrayStack<char> >(invoer).filter();
    std::cout << "Linked List Stack:  ";
    backspace<listStack<char> >(invoer).filter();
    std::cout << "STL Vector Stack:   ";
    backspace<vectorStack<char> >(invoer).filter();
    std::cout << "STL Stack Stack:    ";
    backspace<stackStack<char> >(invoer).filter();

    return 0;
} // main
