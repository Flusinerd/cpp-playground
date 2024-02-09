#ifndef HASHMAP_H
#define HASHMAP_H
#include "linked_list.h"
#define BUCKET_SIZE 10

#include "hashnode.h"
#include <iostream>

template <typename T> class HashMap {
public:
  void Hello();
  HashMap() { this->buckets = new LinkedList<T>; }
  ~HashMap() { delete this->buckets; }
  void Insert(std::string *key, T value) { auto hash = this->hash(key); }

private:
  LinkedList<T> *buckets;
  int hash(std::string *key) {
    long long checksum = 0;
    for (char &c : *key) {
      checksum += (int)c;
    }
    return checksum % BUCKET_SIZE;
  }
};

template <class T> inline void HashMap<T>::Hello() {
  std::cout << "Hello HashMap" << std::endl;
}
#endif // HASHMAP_H
