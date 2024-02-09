#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "linked_list_node.h"
#include <iostream>
#include <ostream>

template <typename V> class LinkedList {
public:
  LinkedList() : head(nullptr) {}
  void append(V value) {
    LinkedListNode<V> *node = new LinkedListNode<V>(value);
    auto tail = this->getTail();
    if (tail == nullptr) {
      this->head = node;
      return;
    }

    tail->SetNext(node);
  }

  friend std::ostream &operator<<(std::ostream &stream,
                                  const LinkedList<V> &list) {
    list.print(stream);
    return stream;
  }

  void print(std::ostream &stream) const {
    stream << "[";
    auto current = this->head;
    do {
      if (current != nullptr) {
        stream << current->GetValue() << ", ";
      }
      current = current->GetNext();
    } while (current != nullptr);

    stream << "]" << std::endl;
  }

private:
  LinkedListNode<V> *head;

  LinkedListNode<V> *getTail() {
    if (this->head == nullptr) {
      return nullptr;
    }

    auto current = this->head;
    if (current->GetNext() != nullptr) {
      current = current->GetNext();
    }

    return current;
  }
};

#endif // !LINKED_LIST_H
