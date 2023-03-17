// HashTableEx2.cpp
// A HashTable class is defined that uses a simple hash function based on modulo operation. The insert method inserts an 
// <int,int> key-value pair into the hash table, and the get method retrieves the value associated with a given key. The displayHistogram
// method displays a histogram of the distribution of items within the hash table, with each column representing a slot in the hash table
// and each row representing a count of items in that slot. The histogram is displayed using asterisks (*) to represent non-zero counts.
// (from ChatGDP)

#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<pair<int, int>> table[TABLE_SIZE];

    // Simple hash function using modulo operation
    int hash(int key) {
        return key % TABLE_SIZE;
    }

public:
    void insert(int key, int value) {
        int index = hash(key);
        for (auto& item : table[index]) {
            if (item.first == key) {
                item.second = value;
                return;
            }
        }
        table[index].push_back(make_pair(key, value));
    }

    int get(int key) {
        int index = hash(key);
        for (auto& item : table[index]) {
            if (item.first == key) {
                return item.second;
            }
        }
        return -1;
    }

    void displayHistogram() {
        cout << endl << endl;
        int histogram[TABLE_SIZE] = {0};
        for (int i = 0; i < TABLE_SIZE; i++) {
            histogram[i] = table[i].size();
        }

        int maxCount = *max_element(histogram, histogram + TABLE_SIZE);
        for (int i = maxCount; i > 0; i--) {
            for (int j = 0; j < TABLE_SIZE; j++) {
                if (histogram[j] >= i) {
                    cout << "  *  ";
                } else {
                    cout << "     ";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << " ---- ";
        }
        cout << endl;

        for (int i = 0; i < TABLE_SIZE; i++) {
            printf("| %2d  ", i);
        }
        cout << "|" << endl;
    }
};

int main() {
    HashTable ht;

    // Insert some items into the hash table
    ht.insert(5, 10);
    ht.insert(2, 20);
    ht.insert(8, 30);
    ht.insert(3, 40);
    ht.insert(6, 50);
    ht.insert(4, 60);
    ht.insert(9, 70);
    ht.insert(1, 80);
    ht.insert(1, 20);
    ht.insert(1, 30);
    ht.insert(1, 40);
    ht.insert(1, 50);



    // Display the histogram of the hash table
    ht.displayHistogram();

    return 0;
}
