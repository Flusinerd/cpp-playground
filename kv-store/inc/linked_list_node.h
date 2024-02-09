#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>
template <typename V> class LinkedListNode {
public:
  V GetValue() { return this->value; }
  void SetNext(LinkedListNode<V> *node) { this->next = node; }
  LinkedListNode<V> *GetNext() { return this->next; }
  LinkedListNode(V val) : value(val), next(NULL) {}

  std::string print() { return std::to_string(this->value); }

private:
  V value;
  LinkedListNode *next;
};

#endif // !LINKED_LIST_NODE_H
