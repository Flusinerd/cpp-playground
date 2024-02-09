#include "linked_list.h"
#include <iostream>

int main(int argc, char *argv[]) {
  LinkedList<int> list;
  list.append(1);
  list.append(2);

  std::cout << list << std::endl;

  return 0;
}
