#include <iostream>
#include "Stack.h"

void directions(int& input);
void intInputValidation(int& theInput);


int main() {
    Stack<int> myStack;
    int input, answer;
    bool done = false;
    while (!done){
        directions(input);
        intInputValidation(input);
        switch (input){
        case 1:
            std::cout << "Enter a number you would like to push: ";
            std::cin >> answer;
            //intInputValidation(answer);
            myStack.push(answer);
            break;
    
        case 2:
            myStack.pop();
            break;

        case 3:
            try{        
                std::cout << "Top item is: " << myStack.peek() << std::endl;
            }
            catch(std::logic_error e){
                std::cout << e.what() << std::endl;
            }    
            break;

        case 4:
            done = true;
            break;
        }
    }
}

void directions(int& theInput){
    std::cout << "Enter: \n"
                 " \'1\' to add an item\n"
                 " \'2\' to remove top item\n"
                 " \'3\' to see top item\n"
                 " \'4\' to quit program\n"
                 "--------------------------\n";
    std::cin >> theInput;
}

void intInputValidation(int& theInput){
    while (!std::cin.good() || std::cin.peek() == ' '){
        std::cout << "ERROR: Incorrect data entered!\n"
                     "--------------------------\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');
        std::cout << "Re-enter number: ";
        std::cin >> theInput;
        }
}