#include <iostream>
#include "Stack.h"

int main() {
    Stack<int> myStack;
    std::string answer;
    int answertwo;
    while (answer != "quit"){
        do{
            std::cout << "Enter push to add an "
            "item, pop to remove top item,\n "
            "peek to see top item, and quit " 
            "to quit program." << std::endl;
            std::cin >> answer;
        }
        while ((answer != "push") && (answer != "pop") && (answer != "peek") && (answer != "quit"));  
        if (answer == "push"){
            std::cout << "Enter a number to push to the stack.\n"; 
            std::cin >> answertwo;
            myStack.push(answertwo);
        }
        else if (answer == "pop"){
            if (myStack.isEmpty()){
                std::cout << "your stack is empty.\n";
         }
            else {
                myStack.pop();
            }
        }
        else if (answer == "peek"){
            std::cout << "top item is: " << myStack.peek() << std::endl;
        }
    }
}
