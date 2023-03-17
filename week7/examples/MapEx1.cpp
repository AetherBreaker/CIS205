// MapEx1.cpp
// We define a map<int, string> and insert some items into it using the square bracket notation. We then compute a histogram of the distribution of items within the map by iterating
// over the map and counting the length of each value string. We store the counts in a vector<int> called histogram, where the i-th element of the vector represents the number of items
// in the map that have a value string of length i.

// We then display the histogram by iterating over the histogram vector and printing asterisks (*) for each count greater than or equal to the current row number.
// We also print a horizontal line of dashes (-) to separate the histogram from the x-axis labels, and print the x-axis labels (which are just the values of the map) along the bottom of the
// histogram.  (from ChapGDP).

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<int, string> myMap;
    
    // Insert some items into the map
    myMap.emplace(1, "apple");
    myMap.emplace(2, "banana");
    myMap.emplace(3, "cherry");
    myMap.emplace(4, "date");
    myMap.emplace(5, "elderberry");
    myMap.emplace(6, "fig");
    myMap.emplace(7, "grape");
    myMap.emplace(8, "honeydew");
    
    // Display the histogram of the map
    vector<int> histogram;
    for (const auto& item : myMap) {
        int length = item.second.length();
        while (histogram.size() <= length) {
            histogram.push_back(0);
        }
        histogram[length]++;
    }
    
    int maxCount = *max_element(histogram.begin(), histogram.end());
    for (int i = maxCount; i > 0; i--) {
        for (const auto& count : histogram) {
            if (count >= i) {
                cout << "  *  ";
            } else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    
    for (int i = 0; i < myMap.size(); i++) {
        cout << " ---- ";
    }
    cout << endl;
    
    for (const auto& item : myMap) {
        printf("| %-8s ", item.second.c_str());
    }
    cout << "|" << endl;
    
    return 0;
}
