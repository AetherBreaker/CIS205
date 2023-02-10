// Jacob Ogden
// 2/10/2023
#include <utility>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::pair;
using std::vector;

pair<int, int> get_min_max(vector<int> vec) {
    int min = vec[0];
    int max = vec[0];
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < min) {
            min = vec[i];
        }
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return std::make_pair(min, max);
}

int main(int argc, char *argv[]) {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    pair<int, int>minmax_pair = get_min_max(vec);
    cout << "Min: " << minmax_pair.first << endl;
    cout << "Max: " << minmax_pair.second << endl;
    return 0;
}