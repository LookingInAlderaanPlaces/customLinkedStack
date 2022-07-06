#ifndef STACK_
#define STACK_
#include "Node.h"

template <typename ItemType>
class Stack{
 private:
  using NodePtr = Node<ItemType>*;
  NodePtr topPtr = nullptr;
  int ItemCount = 0;
 public:
  Stack() = default;
  void push(ItemType& newEntry);
  bool pop();
  ItemType peek();
  bool isEmpty();

};
#include "Stack.cpp"
#endif