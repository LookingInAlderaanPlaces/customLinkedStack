#ifndef NODE_
#define NODE_

template <typename ItemType>
class Node {
private:
  ItemType data;
  Node<ItemType>* prevPtr = nullptr;
public:
  Node() = default;
  Node(ItemType theData, Node<ItemType>* nextNodePtr = nullptr);
  void setData(ItemType theData);
  void setPrev(Node<ItemType>* prevNodePtr);
  ItemType getData();
  Node<ItemType>* getPrev();

};
#include "Node.cpp"
#endif
