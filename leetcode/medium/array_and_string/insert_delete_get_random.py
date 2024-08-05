import random

class RandomizedSet:

    def __init__(self):
        self.val_to_index = {}  # Hash map to store value to index mapping
        self.values = []        # List to store values

    def insert(self, val: int) -> bool:
        if val in self.val_to_index:
            return False
        self.val_to_index[val] = len(self.values)
        self.values.append(val)
        return True

    def remove(self, val: int) -> bool:
        if val not in self.val_to_index:
            return False
        # Move the last element to the place of the element to be removed
        last_element = self.values[-1]
        index_to_remove = self.val_to_index[val]
        self.values[index_to_remove] = last_element
        self.val_to_index[last_element] = index_to_remove
        # Remove the last element
        self.values.pop()
        del self.val_to_index[val]
        return True

    def getRandom(self) -> int:
        return random.choice(self.values)
print(RandomizedSet(["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"],[[], [1], [2], [2], [], [1], [2], []]))