#ifndef HASHNODE_H
#define HASHNODE_H

#include <cstddef>
template <typename K, typename V> class HashNode {
public:
  HashNode(K key, V val) : key(key), val(val), next(NULL) {}

private:
  K key;
  V val;
  HashNode *next;
};

#endif // !HASHNODE_H
