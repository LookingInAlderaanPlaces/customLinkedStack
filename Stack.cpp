#include <cassert>

template <typename ItemType>
void Stack<ItemType>::push(ItemType& newEntry){
    if (!isEmpty()){
        NodePtr prevPtr = topPtr;
        topPtr = new Node<ItemType>;
        topPtr->setPrev(prevPtr);
        topPtr->setData(newEntry);
        ++ItemCount;
    }
    else {
        topPtr = new Node<ItemType>;
        topPtr->setData(newEntry);
        topPtr->setPrev(nullptr);
        ++ItemCount;
    }
}

template <typename ItemType>
bool Stack<ItemType>::pop() {
    if (!isEmpty()){
        NodePtr DeletedPtr = topPtr;
        topPtr = topPtr->getPrev();
        delete DeletedPtr;
        --ItemCount;
        return true;
    }
    else{
        std::cout << "Your stack is empty!\n";
        return false;
    }
}

template <typename ItemType>
ItemType Stack<ItemType>::peek() {
    if (!isEmpty()){
    return topPtr->getData();
    }
    else{
        throw std::logic_error("Stack is empty!");
    }
}

template <typename ItemType>
bool Stack<ItemType>::isEmpty(){
    if (ItemCount == 0) {
        return true;
    }
    else {
        return false;
    }

}
