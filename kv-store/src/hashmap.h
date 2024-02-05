#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>

template <typename T> class HashMap {
public:
  void Hello();
  HashMap() { this->buckets = new int[10]; }
  ~HashMap() { delete this->buckets; }

private:
  int *buckets;
};

template <class T> inline void HashMap<T>::Hello() {
  std::cout << "Hello HashMap" << std::endl;
}
#endif // HASHMAPename
