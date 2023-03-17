//HashTableEx1.cpp

// In this program, we define a HashTable class that uses a simple hash function based on the length of the string as the key. The insert
// method inserts a key-value pair into the hash table, and the get method retrieves the value associated with a given key. The
// displayHistogram method displays a histogram of the distribution of items within the hash table, with each column representing a slot
// in the hash table and each row representing a count of items in that slot. The histogram is displayed using asterisks (*) to represent
// non-zero counts.  (from ChatGDP)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<pair<string, int>> table[TABLE_SIZE];

    // Simple hash function using the length of the string as the key
    int hash(string key) {
        return key.length() % TABLE_SIZE;
    }

public:
    void insert(string key, int value) {
        int index = hash(key);
        for (auto& item : table[index]) {
            if (item.first == key) {
                item.second = value;
                return;
            }
        }
        table[index].push_back(make_pair(key, value));
    }

    int get(string key) {
        int index = hash(key);
        for (auto& item : table[index]) {
            if (item.first == key) {
                return item.second;
            }
        }
        return -1;
    }

    void displayHistogram() {
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
    ht.insert("apple", 5);
    ht.insert("banana", 2);
    ht.insert("orange", 8);
    ht.insert("pear", 3);
    ht.insert("watermelon", 6);
    ht.insert("pineapple", 4);
    ht.insert("grape", 9);
    ht.insert("kiwi", 1);

    // Display the histogram of the hash table
    ht.displayHistogram();

    return 0;
}
