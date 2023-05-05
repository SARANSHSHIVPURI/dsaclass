#include <iostream>
#include <vector>

using namespace std;


class HashTable {
private:
    vector<int> table;
    int size;

public:
    HashTable(int size) {
        this->size = size;
        table.resize(size, -1);
    }

   
    int hash(int key) {
        return key % size;
    }

   
    void insert(int key) {
        int index = hash(key);

        while (table[index] != -1) {
            index = (index + 1) % size;
        }

        table[index] = key;
    }


    int countEmptyCells() {
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (table[i] == -1) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    HashTable table(10);


    table.insert(5);
    table.insert(15);
    table.insert(25);

    
    int emptyCells = table.countEmptyCells();
    cout << "Number of empty cells: " << emptyCells << endl;

    return 0;
}
