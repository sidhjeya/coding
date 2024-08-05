#include <iostream>
#include <map>

int main() {
  std::map<std::string, int> myMap = {{"apple", 10}, {"banana", 15}, {"cherry", 20}};

  // Get iterators to the beginning and end of the map
  auto it = myMap.begin();
  auto end = myMap.end();

  // Loop through each element using the iterator
  while (it != end) {
    std::cout << it->first << ": " << it->second << std::endl;
    ++it;
  }

  return 0;
}
