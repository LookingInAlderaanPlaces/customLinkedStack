template <typename ItemType>
void Node<ItemType>::setData(ItemType theData){
  data = theData;
}

template <typename ItemType>
ItemType Node<ItemType>::getData(){
  return data;
}

template <typename ItemType>
void Node<ItemType>::setPrev(Node<ItemType>* prevNodePtr){
  prevPtr = prevNodePtr;
  }

  template <typename ItemType>
  Node<ItemType>* Node<ItemType>::getPrev(){
    return prevPtr;
  }