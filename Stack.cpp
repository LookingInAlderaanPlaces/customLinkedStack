template <typename ItemType>
void Stack<ItemType>::push(ItemType newEntry){
    if (!isEmpty()){
        NodePtr LastPtr = topPtr;
        topPtr = new Node<ItemType>;
        topPtr->Node::setPrev(LastPtr);
        topPtr->Node::setData(newEntry);
        ++ItemCount;
    }
    else {
        topPtr = new Node<ItemType>;
        topPtr->Node::setData(newEntry);
        topPtr->Node::setPrev(nullptr);
        ++ItemCount;
    }
}

template <typename ItemType>
void Stack<ItemType>::pop() {
    if (!isEmpty()){
        NodePtr DeletedPtr = topPtr;
        topPtr = topPtr->Node::getPrev();
        delete DeletedPtr;
        --ItemCount;
    }
}

template <typename ItemType>
ItemType Stack<ItemType>::peek() {
    return topPtr->Node::getData();
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
